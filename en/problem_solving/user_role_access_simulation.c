#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char username[20];
    char role[10];
    bool active;
} User;

bool has_access(const User *user, const char *requested_action)
{
    if (user == NULL || !user->active)
        return false;

    if (strcmp(user->role, "admin") == 0)
        return true;

    if (strcmp(user->role, "editor") == 0 && strcmp(requested_action, "write") == 0)
        return true;

    if (strcmp(user->role, "viewer") == 0 && strcmp(requested_action, "read") == 0)
        return true;

    return false;
}

int main(void)
{
    User user1 = {"ada", "admin", true};
    User user2 = {"john", "viewer", true};

    printf("%s write: %s\n", user1.username, has_access(&user1, "write") ? "allowed" : "denied");
    printf("%s write: %s\n", user2.username, has_access(&user2, "write") ? "allowed" : "denied");
    printf("%s read: %s\n", user2.username, has_access(&user2, "read") ? "allowed" : "denied");

    return 0;
}
