#include<stdio.h>
int main()
{
    int Percentage;
    printf("Enter your Percentage\n");
    scanf("%d",&Percentage);
    if((Percentage<=100) && (Percentage>=0))
    {
        if(Percentage>=85)
        {
            printf("You have got Distinction\n");
        }
        else if((Percentage>=60) && (Percentage<85))
        {
            printf("You have got First Class\n");
        }
        else if((Percentage>=50) && (Percentage<60))
        {
            printf("You have got Second Class\n");
        }
        else
        {
            printf("Sorry you have failed\n");
        }
    }
    else
    {
        printf("Please enter your valid percentage ranging between 0 and 100\n");
    }
    return 0;
}
