#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main()
{
    int x,first=0,second=1,next,i;
    printf("enter the maximum number\n");
    scanf("%d",&x);
    printf(" fibnocii series are:\n",x);
     printf("%d %d\n",first,second);
     next=first+second;
    while(next<=x)
    {
     printf("%d, ",next);
     first=second;
     second=next;
     next=first+second;
    }
    getch();
    return 0;
}
