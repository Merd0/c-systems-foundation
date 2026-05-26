/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/data_structures/README.md
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copy_string(const char *text)
{
    if (text == NULL)
    {
        return NULL;
    }

    size_t length = strlen(text) + 1;
    char *copy = malloc(length);
    if (copy == NULL)
    {
        return NULL;
    }

    memcpy(copy, text, length);
    return copy;
}

int main(void)
{
    char *name = copy_string("systems-c");
    if (name == NULL)
    {
        return 1;
    }

    printf("owned copy: %s\n", name);

    free(name);
    name = NULL;

    return 0;
}

