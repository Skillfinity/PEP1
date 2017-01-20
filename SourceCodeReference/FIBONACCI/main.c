#include <stdio.h>

int main()
{
    int fib,prev=0,next=1,series;
    printf("Enter the numbrer till which fibonacii series need to be generated\n");
    scanf("%d",&fib);
    if(fib>=0)
        printf("%d\n",prev);
    if(fib>=1)
        printf("%d\n",next);

    while((prev+next)<=fib)
    {
        series=prev+next;
        printf("%d\n",series);
        prev=next;
        next=series;
    }
    return 0;
}
