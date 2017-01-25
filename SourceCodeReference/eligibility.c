#include <stdio.h>
#include <conio.h>
void main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d",&age);
    if(age>=18)
        printf("Eligible to vote\n");
    else
        printf("Not eligible to vote\n");
    getch();
}
