#include <stdio.h>

int main()
{
    int x,y;

    printf("enter the value of first number\n");
    scanf("%d",&x);

    printf("enter the value of second number\n");
    scanf("%d",&y);

    if(x > y)
    {
        printf("%d is greater than %d\n",x,y);
    }
    else if(x < y)
    {
         printf("%d is greater than %d\n",y,x);
    }
    else
    {
        printf("both the numbers are equal\n");
    }
    return 0;
}
