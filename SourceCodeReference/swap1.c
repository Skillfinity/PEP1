#include <stdio.h>

int main()
{
    int a=30,b=10;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n after swapping the variable of a:%d",a);
    printf("\n after swapping value of b:%d",b);
    return(0);


}
