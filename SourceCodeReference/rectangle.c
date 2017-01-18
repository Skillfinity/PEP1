#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int l=10,b=10,area,perimeter,diagnol;
printf("\nenter the length of the rectangle");
scanf("%d",&l);
printf("\nenter the breadth of the rectangle");
scanf("%d",&b);
area=l*b;
perimeter=2*(l+b);
diagnol=sqrt((l*l)+(b*b));
printf("\n area of rectangle=%d",area);
printf("\n perimeter of rectangle=%d",perimeter);
printf("\n diagnol of rectangle=%d",diagnol);
}
