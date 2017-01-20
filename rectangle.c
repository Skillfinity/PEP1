#include <stdio.h>
#include <conio.h>
int main()
{
    float length,width,area,perimeter,diagonal;
    printf("Enter the length of the rectangle ");
    scanf("%f",&length);
    printf("Enter the width of the rectangle ");
    scanf("%f",&width);

    area=length*width;
    printf("Area of the rectangle is: %f\n",area);

    perimeter=2*(length+width);
    printf("Perimeter of the rectangle is: %f\n",perimeter);

    diagonal=sqrt(length*length+width*width);
    printf("Length of diagonal of the rectangle is: %f",diagonal);

    getch();
    return 0;
}
