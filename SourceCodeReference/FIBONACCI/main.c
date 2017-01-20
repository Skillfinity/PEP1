#include <stdio.h>

int main()
{
    int x,t1=0,t2=1,t3;
    printf("Enter the limit x");
    scanf("%d",&x);
    while(t1<x)
    {
        printf("%d \n",t1);
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }

    return 0;
}
