#include <stdio.h>

#define APP_NAME "C Systems Foundation"
#define MAX_USERS 100

/*
 * Header files should use include guards:
 *
 * #ifndef CONFIG_H
 * #define CONFIG_H
 * declarations go here
 * #endif
 */

int main(void)
{
    printf("%s\n", APP_NAME);
    printf("max users: %d\n", MAX_USERS);

    return 0;
}

