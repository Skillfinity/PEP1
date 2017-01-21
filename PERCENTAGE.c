#include<stdio.h>
int main()
{
 float per; 
 printf("Enter your percentage: ");
 scanf("%F",&per);
 if(per>=70)
   printf("\nFirst class with distinction");
 else if(per>=60 && per<=69)
   printf("\nFirst class");
 else if(per>=40 && per<=59)
   printf("\nSecond class");
 else if(per<40)
   printf("\nFail");
 return 0;
}