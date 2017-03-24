#include <stdio.h>

int main()
{
    int a,b,ad,s=0;
   printf("enter valus\n");
   scanf("%d",&a);
   printf("enter yous\n");
   for(ad=1; ad<=a; ad++)
   {
       scanf("%d",&b);
       s=s+b;
   }
printf("sum all %d",s);
    printf("\nHello World!\n");
    return 0;
}
