#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

int main()
{
    int x,i,j,flag;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    printf("prime numbers between 0 and %d are : \n ", x);
    for(i=2;i<=x;i++)
    {
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("%d\n",i);
    }
    getch();
    return 0;
}
