#include <stdio.h>

int main()
{
    int n,i,c=0;
    printf("entr no\n");
    scanf("%d,",&n);
    for (i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
            break;

        }
    }
    if(c==0&&n!=1)
        printf("%d prime\n",n);
    else
        printf("%d not prime\n",n);
    return 0;
}
