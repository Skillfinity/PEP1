#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{
    int l,b,A,P;
    float D;
    printf("enter the value of length\n");
    scanf("%d",&l);
    printf("enter the value of breadth\n");
    scanf("%d",&b);
    A=l*b;
    P=2*(l+b);
    D=sqrt(l*l+b*b);
    printf("area,perimeter,diagonal values are:%d,%d,%f\n",A,P,D);
    getch();
    return 0;
}
