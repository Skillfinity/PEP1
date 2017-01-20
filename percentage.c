#include <stdio.h>
int main()
{
int percentage;
printf("Enter your percentage \n");
scanf("%d", &percentage);
if( percentage>=70)
{
printf("CONGRATS! You have got FIRST CLASS with DISTINCTION ");
}
else if(percentage>=60)
{
printf("You have got FIRST CLASS ");
}
else if(percentage>=35)
{
printf("You have got SECOND CLASS ");
}
else if(percentage<35)
{
printf("SORRY. You have FAILED ");
}
return 0;
}
