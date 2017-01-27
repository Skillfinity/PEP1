#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ope;
    double mul,add,sub,n1,n2,div;
    printf("enter the operation to performed\n");
    scanf("%c",&ope);
    printf("enter the values of n1 and n2\n");
    scanf("%lf %lf",&n1,&n2);

    switch(ope)
    {
    case 'm':
        mul=n1*n2;
        printf("mulitiplication output is %0.1lf\n",mul);
        break;
    case 'a':
        add=n1+n2;
        printf("addition output is: %0.1lf\n",add);
        break;

    case 's':
        sub=n1-n2;
        printf("subtraction output is :%0.1lf\n",sub);
        break;
    case 'd':
        div=n1/n2;
        printf("division output :is  %0.1lf",div);
        break;
    default :
        printf("invalid");

    }
    return 0;
}
