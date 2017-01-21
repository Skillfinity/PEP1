#include <stdio.h>

int main()
{
    int x,y;
    printf("enter the value of x\n");
    scanf("%d",&x);
    printf("enter the value of y\n");
    scanf("%d",&y);
   if(x>y)
    printf("x is greater than y\n");
   else if(x<y)
        printf("x is smaller than y\n");
   else
         printf("x is equal to y\n");
    return 0;
}
