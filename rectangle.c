#include <stdio.h>
#include <math.h>

int main()
{
   int length,breadth,diagonal,area,perimeter;
   printf("Length of rectangle is:");
   scanf("%d",&length);
   printf("Breadth of rectangle is:");
   scanf("%d",&breadth);

   area=length*breadth;
   perimeter=2*(length+breadth);
   diagonal=sqrt((length*length)+(breadth*breadth));
   printf("Area, perimeter and length of diagonal of rectangle are respectively %d,\n%d,\n%d",area,perimeter,diagonal);
   return 0;
}
