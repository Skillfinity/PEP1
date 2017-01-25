#include <stdio.h>
int main()
{
 int percentage;

 printf("Enter your percentage \n");
 scanf("%d", &percentage);

 if( percentage>=70)
 {
  printf("CONGRATS! You have got FIRST CLASS with DISTINCTION \n");
 }
 else if(percentage>=60)
 {
  printf("You have got FIRST CLASS\n ");
 }
 else if(percentage>=35)
 {
  printf("You have got SECOND CLASS \n");
 }
 else if(percentage<35)
 {
  printf("SORRY. You have FAILED \n");
 }
 return 0;
}
