#include <conio.h>
#include <stdio.h>
int main()
{

int a, b, c, i, n;


    printf("Enter value of n to print Fibonacci series : ");
    scanf("%d", &n);


    a = 0;
    b = 1;
    c = 0;

    for(i=1; i<=n; i++)
    {
        printf("%d, ", c);

        a=b;
        b=c;
        c=a+b;
    }

    return 0;
}
