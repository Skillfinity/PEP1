#include <stdio.h>
#include <conio.h>

int main()
{
    int x,y;
    char operation;


    printf("enter 2 integer numbers on which operation is to be done.\n");
    printf("Enter value of x\n");
    scanf("%d",&x);
    printf("Enter value of y\n");//
    scanf("%d",&y);

    printf("Enter characters (a,s,d or m) for operation of (add, subtract, divide or multiply) on x and y\n");
    scanf("%c",&operation);
    operation=getch();

    switch(operation)
    {
        case 'a':
            printf("Sum of x and y = %d.\n",(x+y));
        break;

        case 's':
            printf("Difference of x and y = %d.\n",(x-y));
        break;

        case 'd':
            printf("On Dividing x and y Quotient = %f.\n",(float)x/(float)y);
        break;

        case 'm':
            printf("Multiplication of x and y = %d.\n",(x*y));
        break;

        default:
            printf("Please enter valid character as mentioned earlier.\n");
        break;

    }

    return 0;
}
