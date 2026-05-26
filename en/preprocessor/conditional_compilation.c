/*
 * Study navigation:
 * Back to Learning Path: https://github.com/Merd0/c-systems-foundation/blob/main/en/LEARNING_PATH.md
 * Next step: https://github.com/Merd0/c-systems-foundation/blob/main/en/bitwise/README.md
 */

#include <stdio.h>

int main(void)
{
#ifdef DEBUG
    puts("debug build: extra diagnostics enabled");
#else
    puts("release-style build: debug diagnostics disabled");
#endif

#if defined(_WIN32)
    puts("platform: windows");
#elif defined(__linux__)
    puts("platform: linux");
#elif defined(__APPLE__)
    puts("platform: apple");
#else
    puts("platform: unknown");
#endif

    return 0;
}

