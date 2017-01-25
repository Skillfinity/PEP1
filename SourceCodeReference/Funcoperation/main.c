#include <stdio.h>
#include "switch.h"
#include "primeop.h"


int n=0;
extern int x;

#ifdef INTOP
#include "intop.h"
#else
#include "floatop.h"
#endif

int main()
{
    while(1)
    {
#ifdef INTOP
    int num1,num2;

    printf("Enter the two integer values:\n");
    scanf("%d%d", &num1, &num2);
    printf("\nSum of the two integer numbers is %d\n", add(num1,num2));
    printf("Difference of the two integer numbers is %d\n", sub(num1,num2));
    printf("Product of the two integer numbers is %d\n", mul(num1,num2));
    printf("Quotient of the two integer numbers is %d\n", div(num1,num2));

#else
    float num1,num2;

    printf("Enter the two float values:\n");
    scanf("%f%f", &num1, &num2);
    printf("\nSum of the two float numbers is %f\n", add(num1,num2));
    printf("Difference of the two float numbers is %f\n", sub(num1,num2));
    printf("Product of the two float numbers is %f\n", mul(num1,num2));
    printf("Quotient of the two float numbers is %f\n", div(num1,num2));

#endif

    //to print the prime numbers
    printf("\nEnter the n value:");
    scanf("%d", &n);

    printf("are the prime numbers\n",prime());
}
    return 0;
}
