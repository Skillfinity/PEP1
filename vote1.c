#include<stdio.h>
int main()
{
    int age;
    printf("Please enter your age \n");
    scanf("%d",&age);

    if(age>=18)
    {
      printf("ELIGIBLE TO VOTE");
    }
    return 0;
}
