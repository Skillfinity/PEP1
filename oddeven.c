#include <stdio.h>
int main()
{
    int a=0;
    int i;
    printf("entr the number\n");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        if((i%2)==0)
        {

           printf("%d\n",i);//to disp even
           //continue -for odd
        }
//printf("%d\n",i)-odd
    }
return 0;
}
