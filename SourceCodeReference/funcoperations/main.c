#include <stdio.h>
#include "programint.h"
#include "programfloat.h"

int num1;
int num2;

float n1;
float n2;

int main()
{
  int x=0;
  printf("enter 1 for integer opeartion and 0 for floating operation\n");
  scanf("%d",&x);

  if(x == 1)
  {
    printf("enter the value of first number\n");
    scanf("%d",&num1);

    printf("enter the value ofsecond number\n");
    scanf("%d",&num2);

    printf("sum of two numbers=:%d\n",sum());
    printf("difference of two numbers=:%d\n",sub());
    printf("product of two numbers=:%d\n",mul());
    printf("division of two numbers=:%d\n",div());
    printf("are the prime numbers\n",prime());
   }
  else if(x ==0)
  {
      printf("enter the value of first number\n");
      scanf("%f",&n1);

      printf("enter the value ofsecond number\n");
      scanf("%f",&n2);

      printf("sum of two numbers=:%f\n",sumf());
      printf("difference of two numbers=:%f\n",subf());
      printf("product of two numbers=:%f\n",mulf());
      printf("division of two numbers=:%f\n",divf());

  }
  else
  {
      printf("error\n");
  }
  return 0;
}

