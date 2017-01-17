#include <stdio.h>

int main()
{
    int percentage;

    printf("enter your percentage\n");
    scanf("%d",&percentage);

    /*70% and above	            Distinction
      60% and above but below 70%	First class
      50% and above but below 60%	Second Class
      40% and above but below 50%	Pass Class
      Below 40%	Fail*/

    if(percentage >= 70)
    {
        printf("you have passed with distinction\n");
    }
    else if(percentage >= 60 && percentage < 70)
    {
        printf("you have passed with first class\n");
    }
    else if(percentage >= 50 && percentage < 60)
    {
        printf("you have passed with second class\n");
    }
    else if(percentage >= 40 && percentage < 50)
    {
        printf("you have passed with pass class\n");
    }
    else
    {
        printf("you have failed\n");
    }
    return 0;
}
