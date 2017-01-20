#include<stdio.h>
#include<limits.h>

void main()
{
    int inttype;
    float floattype;
    char chartype;
    double doubletype;

    printf("size of int: %ld bytes\n",sizeof(inttype));
    printf("minimum value of int: %d\n",INT_MIN);
    printf("maximum value of int: %d\n",INT_MAX);

    printf("size of int: %ld bytes\n",sizeof(floattype));

    printf("size of char: %ld bytes\n",sizeof(chartype));
    printf("minimum value of char: %d\n",CHAR_MIN);
    printf("maximum value of char: %d\n",CHAR_MAX);

    printf("size of double: %ld bytes\n",sizeof(doubletype));


    printf("minimum value of short int: %d\n",SHRT_MIN);
    printf("maximum value of short int: %d\n",SHRT_MAX);

    printf("minimum value of long int: %ld\n",LONG_MIN);
    printf("maximum value of long int: %ld\n",LONG_MAX);

    printf("maximum value of unsigned char: %d\n",UCHAR_MAX);

    printf("minimum value of signed char: %d\n",SCHAR_MIN);
    printf("maximum value of signed char: %d\n",SCHAR_MAX);
}
