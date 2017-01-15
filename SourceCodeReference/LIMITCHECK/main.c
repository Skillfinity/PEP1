#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Int\n Bytes=%d, Min Value=%d, Max Value=%d\n\n",sizeof(int),INT_MIN,INT_MAX);
    printf("Short\n Bytes=%d, Min Value=%d, Max Value=%d\n\n",sizeof(short),SHRT_MIN,SHRT_MAX);
    printf("Long\n Bytes=%d, Min Value=%ld, Max Value=%ld\n\n",sizeof(long),LONG_MIN,LONG_MAX);
    printf("Unsigned Int\n Bytes=%d, Min Value=0, Max Value=%u\n\n",sizeof(unsigned int),UINT_MAX);
    printf("Unsigned short\n Bytes=%d, Min Value=0, Max Value=%u\n\n",sizeof(unsigned short),USHRT_MAX);
    printf("Unsigned long\n Bytes=%d, Min Value=0, Max Value=%lu\n\n",sizeof(unsigned long),ULONG_MAX);
    printf("Signed Int\n Bytes=%d, Min Value=%d, Max Value=%d\n\n",sizeof(signed int),INT_MIN,INT_MAX);

    printf("///////////////////////////////////////////////////////////////\n");
    printf("Char\n Bytes=%d, Min Value=%d, Max Value=%d\n\n",sizeof(char),CHAR_MIN,CHAR_MAX);
    printf("Unsigned Char\n Bytes=%d, Min Value=0, Max Value=%d\n\n",sizeof(unsigned char),UCHAR_MAX);
    printf("Signed Char\n Bytes=%d, Min Value=%d, Max Value=%d\n\n",sizeof(signed char),SCHAR_MIN,SCHAR_MAX);

    printf("///////////////////////////////////////////////////////////////\n");

    printf("Float = Signed float\n Bytes=%d, Min Value=%E, Max Value=%E\n\n",sizeof(float),FLT_MIN,FLT_MAX);
    printf("double\n Bytes=%d, Min Value=%lE, Max Value=%lE\n\n",sizeof(double),DBL_MIN,DBL_MAX);
    printf("long double\n Bytes=%d, Min Value=%lE, Max Value=%lE\n\n",sizeof(long double),LDBL_MIN,LDBL_MAX);

    printf("Unsigned float, Unsigned double, Unsigned long double doesnot exist in C  \n\n");


    return 0;
}
