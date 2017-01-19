#include <stdio.h>

int main()
{

    int N, i, j,flag;

    printf("Enter the range of prime numbers to be displayed\n");
    scanf("%d",&N);

    printf("Prime numbers between %d to %d\n", 1, N);

    for(i = 1; i <= N; i++)
    {
        flag = 0;

        for(j = 2; j <= i/2; j++)
        {

             if(i % j == 0)
             {
                 flag = 1;
                 break;
             }
        }

        if(flag==0)
        printf("%d\n",i);
    }

   return 0;
}

