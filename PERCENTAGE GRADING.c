#include <stdio.h>
#include <stdlib.h>

int main()
{
   int percentage;
   printf("enter your Percentage\n");
   scanf("%d",&percentage);
   if(percentage>=70)
    printf("you have got DISTINCTION");
   else if(percentage>=60 && percentage<70)
    printf("you have got FIRST CLASS");
   else if(percentage>=35 && percentage<60)
     printf("you have got SECOND CLASS");
   else
    printf("you are FAILED");
    return 0;
}
