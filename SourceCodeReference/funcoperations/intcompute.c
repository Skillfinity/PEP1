#include<stdio.h>
#include "programint.h"

extern int num1;
extern int num2;


int sum()
{
    return num1+num2;

}

int sub()
{
    return num1-num2;

}

int mul()
{
    return num1*num2;
}

int div()
{
    return num1/num2;

}

int prime()
{
    int pr,i;

       while (num1 <= num2)
       {
           pr = 0;

           for(i = 2; i <=num1/2; ++i)
           {
               if(num1 % i == 0)
               {
                   pr = 1;
                   break;
               }
           }

           if (pr == 0)
               printf("%d ", num1);

           ++num1;
       }

       return 0;
}
