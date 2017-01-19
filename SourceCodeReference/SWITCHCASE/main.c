#include <stdio.h>
/* a- addition
   s- subtraction
   d-division
   m-multiplication*/
int main()
{
    char operation;
    int a,b;
    printf("Choose an operation (a,s,d,m): \n");
    scanf("%c",&operation);
    printf("Enter two integer values a and b \n");
    scanf("%d %d",&a,&b);

    switch(operation)
    {
    case 'a':
        printf("%d+%d=%d",a,b,a+b);
        break;
    case 's':
        printf("%d-%d=%d",a,b,a-b);
        break;
    case 'd':
        printf("%d/%d=%d",a,b,a/b);
        break;
    case 'm':
        printf("%d*%d=%d",a,b,a*b);
        break;
    default:
        printf("Error!");

    }
    return 0;
}
