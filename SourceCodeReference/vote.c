#include<stdio.h>
#include<conio.h>
 int main()
 {
     int age;

     printf("Enter your age\n");
     scanf("%d", &age);

     if(age>=18)
        printf("Eligible to vote");
     else
        printf("NOT eligible to vote");
     return 0;
 }
