#include "intpar.h"
#ifdef INTPAR_H

int sum(int a,int b)
{
    return a+b;

}

int sub(int a,int b)
{
    return a-b;

}

int mul(int a,int b)
{
    return a*b;
}

int div(int a,int b)
{
    return a/b;

}

int prime(int a,int b)
{
    int pr,i;

       while (a <= b)
       {
           pr = 0;

           for(i = 2; i <=a/2; ++i)
           {
               if(a % i == 0)
               {
                   pr = 1;
                   break;
               }
           }

           if (pr == 0)
               printf("%d ", a);

           ++a;
       }

       return 0;
}

#endif
