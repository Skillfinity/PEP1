#include<stdio.h>
#include "op_int.h"
extern float n1;
extern float n2;
void int_operation()
{
    int x1=0,x2=0;
    x1 = n1;
    x2 = n2;
    n1 = x1;
    n2 = x2;
    x1=add_int();
    printf("addition = %d\n",x1);
    x1=sub_int();
    printf("subtraction = %d\n",x1);
    x1=mul_int();
    printf("multiplication = %d\n",x1);
    x1=div_int();
    printf("division = %d\n",x1);
    prime_int();
}
float add_int()
{
    return n1+n2;
}
float sub_int()
{
    return n1-n2;
}
float mul_int()
{
    return n1*n2;
}
float div_int()
{
    return n1/n2;
}
void prime_int()
{
    int n,flag_prime,big,small;
    if(n1>n2)
    {
        big=n1;
        small=n2;
    }
    else
    {
        big=n2;
        small=n1;
    }
    if(small>=2 || big>=2)
    {
        printf("Prime numbers-\n");
        if(small<=2)
        small=2;
        for(n=small;n<=big;n++)
        {
            flag_prime = 1;
            for(int i=2; i<=n/2; i++)
            {
                if(n%i==0)
                {
                    flag_prime=0;
                    break;
                }
            }
            if (flag_prime==1)
                printf("%d  ",n);
        }
    }
    else
      printf("No prime numbers");
}
