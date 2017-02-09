#include <stdio.h>
int main()
{
int x, y;
printf("\nEnter an integer value for x: ");
scanf("%d", &x);
printf("\nEnter an integer value for y: ");
scanf("%d", &y);
if (x == y)
{
printf("\nx is equal to y");
}
else
if (x > y)
{
printf("\nx is greater than y ");
}
else
{
printf("\nx is less than y ");
}
return 0;
}