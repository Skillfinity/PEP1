#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if(age>=18)
        printf("you are eligible to vote");
    else
        printf("you are not eligible to vote");
    getch();
	return 0;
}
