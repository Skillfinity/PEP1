#include <stdio.h>
#include <math.h>

int main()
{
    float length,breadth,area,perimeter,dialength;
    /* dialength= length of diagonal of a rectangle*/

    printf("enter the value of length of a rectangle:\n");
    scanf("%f",&length);

    printf("enter the value of breadth of a rectangle:\n");
    scanf("%f",&breadth);

    area= length * breadth;/*area of rectangle*/
    perimeter= 2*(length + breadth);/*perimeter of rectangle*/
    dialength= sqrt((length*length)+(breadth*breadth));/*diagonal length of rectangle*/

    printf("the area of rectangle= %f\n",area);
    printf("the perimeter of rectangle= %f\n",perimeter);
    printf("the length of diagonal of rectangle= %f\n",dialength);


   return 0;
}
