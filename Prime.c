#include<stdio.h>
int main()
{
  int x,i,j,n; 
    printf("print all prime numbers between 1 to x\n");
    printf("Enter the value of x\n");
    scanf("%d",&x);
    printf("Prime numbers between %d to %d\n",1,x);
   for(i = 2; i <= x; i++)
   {
        n= 0;
        /* Check whether i is prime or not */
  for(j = 2; j <= i/2; j++)
        {
             if(i % j == 0)
             {
                 n= 1;
                 break;
             }
        }
    if(n==0 && x!= 1)
        printf("%d ",i);
    }
    return 0;
}
