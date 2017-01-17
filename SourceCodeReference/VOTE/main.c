#include <stdio.h>

int main()
{
    int age;
    printf("To check if you are eligible to vote or not, Enter your age in years\n");
    scanf("%d" ,&age);
    if(age>=18)
    {
        printf("Eligible to vote\n");
    }
    else
    {
        printf("Not eligible to vote\n");
    }
    return 0;
}
