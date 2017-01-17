#include <stdio.h>
#include <math.h>
int main()
{
    //float l, b, p, area, d;
    float l, b, d;
    //input l and b
    printf("Enter the length and breadth of the rectangle in meter");
    scanf("%f%f",&l,&b);


    //perimeter
    //p=2*(l+b);

    //area calculation
   // area=l*b;

    //diagonal
    d=sqrt((l*l)+(b*b));

    printf("perimeter=%fm,\n area=%fsqm\n and length of diagonal=%fm \nfor the rectangle l=%fm and b=%fm",2*(l+b),l*b,d,l,b);
    return 0;
}
