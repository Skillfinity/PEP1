#include <stdio.h>

int main()
{
    int age;
    int flag =1;
    while(flag==1)
{

        printf("\n enter the age to vote");
        scanf("%d",&age);
  if(age>=18)
      printf("\neligible to vote");
  else if(age<18)
      printf("\n not eligible to vote");

}



}
