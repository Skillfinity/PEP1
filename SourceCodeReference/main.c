#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age;
   printf("enter the  age of the person\n");
   scanf("%d",&age);
   if(age<18)
       printf(" not eligible to vote\n");
    else
        printf("eligible  to vote\n");
    return 0;
}
