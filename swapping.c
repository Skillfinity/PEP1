#include <stdio.h>

int main()
{
    int a,b,area,perime;
    float lendiag;
    printf("entr the no to be swapped\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
 printf("if ex ais 2and bis3 thn 5,2,3\n");
    printf("enter %d,%d\n",a,b);
    printf("Hello World! this wii using differnt\n");
    a=a*b;
    b=a/b;
    a=a/b;

 printf("if ex anb 6,2,3\n");
    printf("enter %d,%d\n",a,b);
    printf("using other differnt\\n");
    a=a^b;
    b=a^b;
    a=a^b;

 printf("010,011 will be 001,010,011\n");
     printf("enter %d,%d\n",a,b);
     printf("entr the valus to calculate the areas of rectangle");
     area = a*b;
     perime =2*(a+b);
     lendiag = ((float)(sqrt (a^2+b^2)));
     printf("enter %d\n,%d\n,%f\n",area,perime,lendiag);

    return 0;
}
