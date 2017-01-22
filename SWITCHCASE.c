#include <stdio.h>
int main() 
{
char ch;
int n1,n2;
printf("\n enter 'a' for Addition ");
printf("\n enter 's'  for Subtraction ");
printf("\n enter 'm' for Multiplication ");
printf("\n enter 'd' for Division ");
printf("\nEnter character for operation:");
scanf("%c", &ch);
printf("\nEnter two integer numbers for operation:");
printf("\n enter first number n1 =");
scanf("%d", &n1);
printf("\nEnter second number n2 =");
scanf("%d", &n2);
switch (ch)
 {
    case 'a':
      printf("\nAddition of n1 and n2=%d",(n1+n2));
        break;
    case 's':
      printf("\nSubtraction of n1 and n2=%d",(n1-n2));
        break;
    case 'm':
   printf("\nMultiplication of n1 and n2=%d",(n1*n2));
        break;
    case 'd':
        printf("\nDivision of n1 and n2=%d",(n1/n2));
        break;
    default:
        printf("\nInvalid value entered");
        break;
 }
printf("\n");
return 0;
}