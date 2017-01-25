#include <stdio.h>
#include "switch.h"

#ifdef INTPAR
#include "intpar.h"
#else
#include "floatpar.h"
#endif

int main()
{
    printf("This will always compile and print at the beginning\n");
#ifdef INTPAR
    int num1;
    int num2;
    printf("enter the value of first number\n");
    scanf("%d",&num1);

    printf("enter the value ofsecond number\n");
    scanf("%d",&num2);

    printf("sum of two numbers=:%d\n",sum(num1,num2));
    printf("difference of two numbers=:%d\n",sub(num1,num2));
    printf("product of two numbers=:%d\n",mul(num1,num2));
    printf("division of two numbers=:%d\n",div(num1,num2));
    printf("are the prime numbers\n",prime(num1,num2));

#else
    float num1;
    float num2;
    printf("enter the value of first number\n");
    scanf("%f",&num1);

    printf("enter the value ofsecond number\n");
    scanf("%f",&num2);

    printf("sum of two numbers=:%f\n",sumf(num1,num2));
    printf("difference of two numbers=:%f\n",subf(num1,num2));
    printf("product of two numbers=:%f\n",mulf(num1,num2));
    printf("division of two numbers=:%f\n",divf(num1,num2));

#endif
    printf("This will always compile and print at the end\n");
    return 0;
}
