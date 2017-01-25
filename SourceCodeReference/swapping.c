#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b;

    printf("Enter the value of a and b\n");
    scanf("%d%d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping\n a=%d \nb=%d", a,b);
    getch();
}
