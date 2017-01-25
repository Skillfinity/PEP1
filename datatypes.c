#include <stdio.h>
#include <limits.h>

int main()
{
    printf("The number of bits in a byte %d\n", CHA_BIT);
    printf("The minimum value of INT=%d\n", INT_MIN);
    printf("The maximum value of INT=%d\n", INT_MAX);
    printf("The minimum value of SHORTINT=%d\n", SHRT_MIN);
    printf("The maximum value of SHORTINT=%d\n", SHRT_MAX);
    printf("The minimum value of LONG=%ld\n", LONG_MIN);
    printf("The maximum value of LONG=%ld\n", LONG_MAX);
    printf("The minimum value of CHAR=%d\n", CHA_MIN);
    printf("The maximum value of CHAR=%d\n", CHA_MAX);
    printf("The minimum value of SIGNEDCHAR=%d\n", SCHAR_MIN);
    printf("The maximum value of SIGNEDCHAR=%d\n", SCHAR_MAX);
    printf("The maximum value of UNSIGNEDCHAR=%d\n", CHA_BIT);
    return 0;
}
