#include <stdio.h>

/* program to swap two integer values without using third variable */
int main()
{
    int first, second;
    printf("The value of first variable before swapping is:");
    scanf("%d",&first);
    printf("The value of second variable before swapping is:");
    scanf("%d",&second);
    first+=second;
    second=first-second;
    first-=second;
     printf("The value of first variable after swapping is:%d\n",first);

    printf("The value of second variable after swapping is:%d",second);

    return 0;
}
