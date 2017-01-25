#include <stdio.h>
#include <limits.h>

int main()
{
    printf("the no of bits in byte id %d\n",CHAR_BIT);
    printf("the min value of integer is %d\n",INT_MIN);
    printf("the max value of integer is %d\n ",INT_MAX);
    printf("the min value of  short integer is %d\n",SHRT_MIN);
    printf("the max value of short integer is %d\n ",SHRT_MAX);
    printf("the min value of long integer is %ld\n",LONG_MIN);
    printf("the max value of long integer is %ld\n ",LONG_MAX);

    printf("the min value of character is %d\n",CHAR_MIN);
    printf("the max value of character is %d\n",CHAR_MAX);
    printf("the max value of signed character is %d\n ",SCHAR_MIN);
  printf("the min value of signed character is %d\n",SCHAR_MAX);
    printf("the max value of unsigned character is %d\n ",UCHAR_MAX);

    return 0;
}
