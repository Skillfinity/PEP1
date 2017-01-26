#include <stdio.h>
#include <stdlib.h>

void main()
{
   int a=10,b=12;
   a=a+b;
   b=a-b;
   a=a-b;
   printf("swapped values are %d %d",a,b);
}
