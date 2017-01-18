#include <stdio.h>

int main()
{
    int x,y;
    printf("enter the two numbers for comparision");
    scanf("%d%d",&x,&y);
    if(x>y)
        printf("\n x is greater");
    else if(x<y)
        printf("\n x is lesser");
    else if(x==y)
         printf("\n x is equal to y");
}
