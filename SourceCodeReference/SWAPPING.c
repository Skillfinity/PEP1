#include <stdio.h>
#include<math.h>

int main()
{
    int a,b;
    printf("enter the first integer\n");
    scanf("%d",&a);
    printf("enter the second integer\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped numbers %d,%d\n",a,b);
    return 0;
}
