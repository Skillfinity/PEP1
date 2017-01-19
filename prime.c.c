
#include<stdio.h>
int main()
{
    int x,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(i=2;i<=x/2;i++)
    {

        if(x%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0 && x!= 1)
        printf("%d is a prime number",x);
    else
        printf("%d is not a prime number",x);
    return (0);
}
