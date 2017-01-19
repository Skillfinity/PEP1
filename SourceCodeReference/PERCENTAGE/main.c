#include <stdio.h>

int main()
{
    float percentage;
    printf("Enter your percentage \n");
    scanf("%f",&percentage);
    if(percentage>=85)
            printf("5Distinction");
    else if(percentage<85 && percentage>=60)
            printf("First class");
    else if(percentage<60 && percentage>=40)
            printf("Second class");
    else
            printf("failure");
    return 0;
}
