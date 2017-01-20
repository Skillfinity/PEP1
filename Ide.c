#include <stdio.h>
int main() 
{
	int x=10, y=20;
	x=x+y;   //x becomes 30
	y=x-y;   //y becomes 10
	x=x-y;   //x becomes 20
	printf(" After swapping: x=%d, y=%d", x,y);
	return 0;
}

