#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter 2 integer numbers for comparing\n");
    printf("Enter x\n");
    scanf("%d",&x);
    printf("Enter y\n");
    scanf("%d",&y);
    if(x>y)
    {
        printf("x is greater than y\n");
    }
    else if(x<y)
    {
        printf("x is less than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
    return 0;
}
