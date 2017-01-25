#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{

    printf("Storage size for int=%d\n",sizeof(int));
    printf("The minimum value of int=%d\n",INT_MIN);
    printf("The maximum value of int=%d\n",INT_MAX);
    printf("The minimum value of short=%d\n",SHRT_MIN);
    printf("The maximum value of short=%d\n",SHRT_MAX);
    printf("The minimum value of long=%d\n",LONG_MIN);
    printf("The maximum value of long=%d\n",LONG_MAX);
    printf("The minimum value of char=%d\n",CHAR_MIN);
    printf("The maximum value of char=%d\n",CHAR_MAX);
    printf("The maximum value of unsigned char=%d\n",UCHAR_MAX);
    printf("The minimum value of signed char=%d\n",SCHAR_MIN);
    printf("The maximum value of signed char=%d\n",SCHAR_MAX);
    printf("The minimum value of float=%d\n",FLT_MIN);
    printf("The maximum value of float=%d\n",FLT_MAX);
    printf("The minimum value of double=%d\n",DBL_MIN);
    printf("The maximum value of double=%d\n",DBL_MAX);
    return 0;

}
