#include <stdio.h>
#include <stdlib.h>

int main()
{
    float percent;
    printf("enter  your percent:\n");
    scanf("%f",&percent);
    if(percent>=85)
        printf("you are  distinction candidate");
    else if(percent<85&&percent>=65)
        printf("you are  first class candidate");
    else if(percent<65&&percent>=35)
        printf("you are second class candidate");
    else
        printf("candidate got failed ");
    return 0;
}
