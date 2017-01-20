#include<stdio.h>
#include<conio.h>

int main()
{
    int n, first=0, second=1, next, x;
    printf("Enter n value\n");
    scanf("%d", &n);

    printf("First %d terms of Fibonacci series are:\n ",n);

    for(x=0;x<n;x++)
    {
        if(x<=1)
            next=x;
        else
        {
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d\n", next);
    }
    return 0;
}
