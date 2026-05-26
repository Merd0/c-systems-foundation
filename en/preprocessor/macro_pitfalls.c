#include <stdio.h>

#define UNSAFE_SQUARE(x) ((x) * (x))

static int square_int(int value)
{
    return value * value;
}

int main(void)
{
    int value = 5;

    printf("macro square: %d\n", UNSAFE_SQUARE(value));
    printf("function square: %d\n", square_int(value));

    /*
     * Avoid this:
     *
     * int i = 3;
     * int result = UNSAFE_SQUARE(i++);
     *
     * The macro would evaluate i++ twice.
     */

    return 0;
}

