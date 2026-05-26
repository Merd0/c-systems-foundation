/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/bitwise/bit_masks_and_packing.c
 */

#include <stdbool.h>
#include <stdio.h>

#define PERM_READ (1u << 0)
#define PERM_WRITE (1u << 1)
#define PERM_EXECUTE (1u << 2)

static bool has_permission(unsigned int permissions, unsigned int permission)
{
    return (permissions & permission) != 0u;
}

int main(void)
{
    unsigned int permissions = 0;

    permissions |= PERM_READ;
    permissions |= PERM_WRITE;

    printf("read: %s\n", has_permission(permissions, PERM_READ) ? "yes" : "no");
    printf("write: %s\n", has_permission(permissions, PERM_WRITE) ? "yes" : "no");
    printf("execute: %s\n", has_permission(permissions, PERM_EXECUTE) ? "yes" : "no");

    permissions &= ~PERM_WRITE;
    printf("write after clear: %s\n", has_permission(permissions, PERM_WRITE) ? "yes" : "no");

    permissions ^= PERM_EXECUTE;
    printf("execute after toggle: %s\n",
           has_permission(permissions, PERM_EXECUTE) ? "yes" : "no");

    return 0;
}

