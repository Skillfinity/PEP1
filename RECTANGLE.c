#include<stdio.h>
#include<math.h>
int main()
{
  float length,breadth,area,perimeter,c;  /*variables to store the values from the users*/                          printf("\nEnter the length of the rectangle:");
scanf("%f",&length);
  printf("\nEnter the breadth of the rectangle:");
scanf("%f",&breadth);
area = length * breadth;                    //Calculating the area using the formula.
perimeter = 2*(length + breadth);    //Calculating the perimeter using the formula.
printf("\nArea of the rectangle with length %d and breadth %d is:%f",(int)length,(int)breadth,area);
printf("\n\nPerimeter of the rectangle with length %d and breadth %d is:%f",(int)length,(int)breadth,perimeter);
c=sqrt(length*length +breadth*breadth);
printf("\nDiagonal of rectangle=%f",c);
return 0 ;
}
