#include<stdio.h>
int main()
{
    int age ;
    printf("Enter the age : ") ;
    scanf("%d", &age) ;
    if(age >= 18)
    printf("\n eligible to vote.") ;
    else
    printf("\n not eligible to vote.") ;
return 0 ; 
}