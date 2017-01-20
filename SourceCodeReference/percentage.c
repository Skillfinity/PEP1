#include<stdio.h>
#include<conio.h>

int main()
{
    int percentage;

    printf("Enter your percentage\n");
    scanf("%d", &percentage);

    if(percentage>=70)
        printf("You have scored DISTINCTION");
    else if(60<=percentage && percentage<70)
        printf("You have scored FIRST CLASS");
    else if(45<=percentage && percentage<60)
        printf("You have scored SECOND CLASS");
    else
        printf("You are FAILED");
    return 0;
}
