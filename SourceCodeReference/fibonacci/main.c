#include <stdio.h>

int main()
{
    int a=0,b=1,n;

       printf("Enter the range of fibonacci series:\n");
       scanf("%d",&n);

       printf("Fibonacci series:\n%d\n%d\n",a,b);

       while((a+b)<=n)
       {
            b = a+b;
            a = b-a;
            printf("%d\n",b);
       }

    return 0;
}
