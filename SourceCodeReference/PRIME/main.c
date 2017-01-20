#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, limit, flag;

    printf("Enter a positive integer: ");
    scanf("%d",&limit);

    for(n=2;n<=limit;n++)
    {
        flag = 1;
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
//printf("    %d\n",i);
    if (flag==1)
        printf("%d\n",n);
    }
    return 0;
}
