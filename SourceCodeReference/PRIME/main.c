#include <stdio.h>
int main()
{
    int i, j, x, flag;
    printf("To generate prime numbers between 1 to : ");
    scanf("%d",&x);

    printf("All prime numbers between 1 to %d are:\n",x);

    for(i=2;i<=x;i++)
    {
      flag = 1;
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
