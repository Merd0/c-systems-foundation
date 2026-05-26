/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/memory_management/README.md
 */

#include <stdio.h>

typedef enum
{
    MESSAGE_LOGIN,
    MESSAGE_DATA,
    MESSAGE_PING
} MessageType;

typedef struct
{
    MessageType type;
    union
    {
        struct
        {
            char username[24];
        } login;
        struct
        {
            int bytes;
            char payload[32];
        } data;
        struct
        {
            unsigned int sequence;
        } ping;
    } body;
} Message;

void handle_message(const Message *message)
{
    if (message == NULL)
    {
        return;
    }

    switch (message->type)
    {
    case MESSAGE_LOGIN:
        printf("login: %s\n", message->body.login.username);
        break;
    case MESSAGE_DATA:
        printf("data: %d bytes, payload=%s\n", message->body.data.bytes, message->body.data.payload);
        break;
    case MESSAGE_PING:
        printf("ping: sequence=%u\n", message->body.ping.sequence);
        break;
    }
}

int main(void)
{
    Message messages[] = {
        {.type = MESSAGE_LOGIN, .body.login.username = "ada"},
        {.type = MESSAGE_DATA, .body.data = {.bytes = 5, .payload = "hello"}},
        {.type = MESSAGE_PING, .body.ping.sequence = 77},
    };

    for (size_t i = 0; i < sizeof(messages) / sizeof(messages[0]); i++)
    {
        handle_message(&messages[i]);
    }

    return 0;
}

