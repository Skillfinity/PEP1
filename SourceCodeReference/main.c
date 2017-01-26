#include <stdio.h>
#include <stdlib.h>

int main()
{
   int len,wid,area,per;
   float dia;
   printf("enter the values of length and width\n");
   scanf("%d %d",&len,&wid);
   area=len*wid;
   per =2*(len+wid);
   dia=sqrt(len*len+wid*wid);
   printf("area ,perimeter,diagonal length is: %d,%d,%f\n",area,per,dia);
   return 0;
}
