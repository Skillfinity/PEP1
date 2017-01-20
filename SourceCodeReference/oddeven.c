#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i;

    printf("Enter n value\t");
    scanf("%d", &n);

    for(i=0;i<=n;i++)
    {
        if(i%2 != 0)
            printf("%d\t", i);
    }
    return 0;
}
