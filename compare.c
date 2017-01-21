#include <stdio.h>
int main()
{
int x, y;
printf("Enter an integer value for x: ");
scanf("%d", &x);

printf("Enter an integer value for y: ");
scanf("%d", &y);

if (x == y)
{
printf("x is equal to y");
}
else if (x > y)
{
printf("x is greater than y ");
}
else
{
printf("x is smaller than y ");
}

return 0;
}

