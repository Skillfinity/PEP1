#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,x;
    printf("enter the value of x\n");
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
      if(i%2!=0)
      printf("%d\n",i);
    }
    getch();
    return 0;
}
