#include <stdio.h>
#include "primeop.h"

        int x,y,isPrime;
        extern int n;

int prime()
{
        for (x = 2; x<=n; x++)
        {
            isPrime = 1;
            for(y=2; y<=x/2; y++)
            {
                if(x%y==0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1)
            {
                printf("%d\n",x);
            }
        }

        return x;
}
