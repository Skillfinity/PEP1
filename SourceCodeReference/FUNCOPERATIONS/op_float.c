#include<stdio.h>
#include "op_float.h"

extern float n1;
extern float n2;

void float_operation()
{

    printf("addition = %f\n",add());
    printf("subtraction = %f\n",sub());
    printf("multiplication = %f\n",mul());
    printf("division = %f\n",div());



    prime();

}

float add()
{
    return n1+n2;
}

float sub()
{
    return n1-n2;
}

float mul()
{
    return n1*n2;
}

float div()
{
    return n1/n2;
}




void prime()
{
       int cn1=0,cn2=0;
    cn1 = n1;
    cn2 = n2;
    n1=cn1;
    n2=cn2;


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
