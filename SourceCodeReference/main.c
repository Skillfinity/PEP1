#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n1=0,n2=1,n3=0;
    printf("enter the value of x\n");
    scanf("%d",&x);
    printf("fibonacci seris:\n");
    printf("%d\n%d\n",n1,n2);
    n3=n1+n2;
    while(n3<=x)
      {
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
        n3=n1+n2;
      }
    return 0;
}
