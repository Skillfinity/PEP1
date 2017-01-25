#include <stdio.h>
#include <conio.h>
#include<math.h>

void main()
{
    float l,b,area, perimeter,diagonal;
    printf("enter the length and breadth of rectangle\n");
    scanf("%f%f", &l,&b);
    area=l*b;
    perimeter=2*(l+b);
    diagonal=sqrt((l*l)+(b*b));
    printf("area=%f\n",area);
    printf("perimeter=%f\n",perimeter);
    printf("diagonal=%f\n",diagonal);
    getch();
}
