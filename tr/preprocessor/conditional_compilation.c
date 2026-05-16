#include <stdio.h>

int main(void)
{
#ifdef DEBUG
    puts("debug build: ekstra tani ciktilari acik");
#else
    puts("release tarzi build: debug ciktilari kapali");
#endif

#if defined(_WIN32)
    puts("platform: windows");
#elif defined(__linux__)
    puts("platform: linux");
#elif defined(__APPLE__)
    puts("platform: apple");
#else
    puts("platform: bilinmiyor");
#endif

    return 0;
}

