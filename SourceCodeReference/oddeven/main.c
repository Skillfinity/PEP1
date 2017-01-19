#include <stdio.h>

int main()
{
   int x;
   int i;

   printf("enter the range of odd numbers to be displayed on the console\n");
   scanf("%d",&x);

   printf("odd numbers for the given range are:\n");

   for(i=0;i <= x;i++)
   {

      if((i%2) !=0)
       {
           printf("%d\n",i);
       }
   }

   return 0;
}
