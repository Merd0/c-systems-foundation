/*
 * Çalışma navigasyonu:
 * Öğrenme Yoluna Dön: https://github.com/Merd0/c-systems-foundation/blob/main/tr/LEARNING_PATH.md
 * Sıradaki adım: https://github.com/Merd0/c-systems-foundation/blob/main/tr/bitwise/README.md
 */

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

