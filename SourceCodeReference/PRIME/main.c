#include <stdio.h>

int main()
{
    int x,i,j,flag;
    printf("Enter the maximum limit x");
    scanf("%d",&x);
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
        {
            printf("%d \n",i);
        }
    }


    return 0;
}
