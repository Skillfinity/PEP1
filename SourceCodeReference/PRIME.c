#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main()
{
    int x,i,j,isprime;
    printf("enter the maximum range: x\n");
    scanf("%d",&x);
    printf(" the prime numbers between 1 to %d are:\n",x);
    for(i=2;i<=x;i++)
    {
        isprime=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                isprime=1;
                break;
            }
        }
        if(isprime==0 && x!=1)
            printf("%d\n",i);
    }
    getch();
	return 0;
}
