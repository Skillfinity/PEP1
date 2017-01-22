#include<stdio.h>
int main()
{
int a,b,sum;
printf("Enter the value of n: ");
scanf("%d%d",&a,&b);
sum = getsum(a,b);
printf("Sum of n numbers: %d",sum);
return 0;
}

