#include <stdio.h>

int main()
{
        int x, y, n, isPrime;

        printf("Enter n value\n");
        scanf("%d", &n);

        printf("Prime numbers between 1 and %d are:\n", n);
        for(x=2; x<=n; x++)
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
                printf("%d\n", x);
            }
        }

        return 0;
    }
