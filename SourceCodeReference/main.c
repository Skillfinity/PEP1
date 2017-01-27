#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x ,i,j,flag;
   printf("enter the value of x\n");
   scanf("%d",&x);
   printf("prime numbers between 1 to %d:\n",x);
   for(i=2;i<=x;i++)
   {
       flag=0;
       for(j=2;j<=i/2;j++)
       {

           if(i%j==0)
           {
               flag=1;
               break;
           }
       }
       if(flag==0&&x!=1)
        printf("%d\n",i);

   }
    return 0;

}
