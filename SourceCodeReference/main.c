#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x,y;
 printf("enter the values\n");
 scanf("%d %d",&x,&y);
 if(x>y)
    printf("x is greater than y\n");
 else if(x<y)
    printf("x is lesser than y\n");
 else
    printf("both are equal\n");
 return 0;
}
