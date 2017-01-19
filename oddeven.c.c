#include <stdio.h>

int main()
{
    int array[100],i,x;
    printf("\n enter the size of an array");
    scanf("%d",&x);
    printf("enter the numbers");
    for(i=0;i<x;i++)
    {
          scanf("%d",&array[i]);
    }
    for(i=0;i<x;i++)
        if(array[i]%2!=0)
        {
            printf("\n number is odd");
            printf("%d",array[i]);

        }



}
