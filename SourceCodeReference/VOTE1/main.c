#include <stdio.h>
void main()
{
 int age;

 printf(" Please enter your age\n");
 scanf("%d", &age);

  if(age>=18)
  {
   printf("ELIGIBLE TO VOTE\n");
  }
  else
  {
   printf("NOT ELIGIBLE TO VOTE\n");
  }
}
