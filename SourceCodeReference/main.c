#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,i;
   printf("enter the value of x\n");
   scanf("%d",&x);
   for(i=0;i<x;i++)
   {
       if(i%2!=0)
        printf("%d\n",i);
   }
   return 0;
}
