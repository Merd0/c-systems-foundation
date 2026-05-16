#include <stdio.h>

int main(void)
{
    unsigned int ozellik_acik = 0u;

    ozellik_acik ^= 1u;
    printf("ilk toggle sonrasi: %u\n", ozellik_acik);

    ozellik_acik ^= 1u;
    printf("ikinci toggle sonrasi: %u\n", ozellik_acik);

    unsigned int a = 10u; /* binary: 1010 */
    unsigned int b = 12u; /* binary: 1100 */
    printf("a ^ b = %u\n", a ^ b);

    return 0;
}
