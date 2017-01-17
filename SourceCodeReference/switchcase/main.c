#include<stdio.h>
int main()
{
    double x,y;
    char operator;

    printf("enter the operator(a,s,m,d):\n");
    scanf("%c",&operator);

    printf("enter the value of x\n");
    scanf("%lf",&x);
    printf("enter the value of y\n");
    scanf("%lf",&y);



    switch (operator)
    {
    case 'a':
        printf("%lf + %lf=%lf\n",x,y,x+y);
        break;
    case 's':
        printf("%lf -%lf=%lf\n",x,y,x-y);
        break;
    case 'm':
        printf("%lf * %lf=%lf\n",x,y,x*y);
        break;
    case 'd':
        printf("%lf / %lf=%lf\n",x,y,x/y);
        break;
    default:
        printf("Error! variable is not correct");

        return 0;
    }
}
