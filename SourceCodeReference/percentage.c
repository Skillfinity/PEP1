#include <stdio.h>
#include <conio.h>

void main()
{
    float percentage;
    printf("Enter the percentage of the student\n");
    scanf("%f", &percentage);
    if(percentage>=85)
        printf("Distinction");
    else if(percentage>=65)
        printf("First class");
    else if(percentage>=35)
        printf("Second class");
    else
        printf("Fail");
    getch();

}
