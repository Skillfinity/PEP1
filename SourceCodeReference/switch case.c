#include <stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    int a,s,m,d;
    int character;

    printf("\n enter the two numbers");
    scanf("%d%d",&num1,&num2);
    printf("\n enter 1 for sum,2 for substraction,3 for multiplication,4 for division:");
    scanf("%d",&character);
    switch(character)
    {
case 1:
    a=num1+num2;
    printf("\n sum=%d",a);
    break;
case 2:
    s=num1-num2;
    printf("substraction=%d",s);
    break;
case 3:
    m=num1*num2;
    printf("multiplication=%d",m);
    break;
case 4:
    d=num1/num2;
    printf("division=%d",d);
    break;
    default:printf("\n error");
        break;
    }

}

