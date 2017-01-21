#include <stdio.h>
#include <limits.h>

int main()
{
    printf("The no. of bits in a byte is:%d\n",CHAR_BIT);
    printf("The min value of integer  is:%d\n",INT_MIN);
    printf("The max value of integer  is:%d\n",INT_MAX);
    printf("The min value of short integer is:%d\n",SHRT_MIN);
    printf("The max value of short integer  is:%d\n",SHRT_MAX);
    printf("The min value of long integer  is:%ld\n",LONG_MIN);
    printf("The max value of long integer  is:%ld\n",LONG_MAX);
    printf("The min value of character  is:%d\n",CHAR_MIN);
    printf("The max value of character is:%d\n",CHAR_MAX);
    printf("The min value of signed character is:%d\n",SCHAR_MIN);
    printf("The max value of signed character is:%d\n",SCHAR_MAX);
    printf("The min value of unsigned character is:%d\n",UCHAR_MAX);
    return 0;
}
