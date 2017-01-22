#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,first=0,second=1,next,i;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("first %d terms of fibnocii series are:\n",n);
    for(i=0;i<n;i++)
    {
     if(i<=1)
        next=i;
     else
    {
        next=first+second;
        first=second;
        second=next;
    }
    printf("%d\n",next);
    }
    return 0;
}
