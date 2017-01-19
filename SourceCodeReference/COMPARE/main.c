#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two integer values a and b \n");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("Value of a is greater than b");
    else if(a<b)
        printf("Value of a is less than b");
    else if(a=b)
        printf("Value of a is equal to b");

    return 0;
}
