#include <stdio.h>
#include <conio.h>

int main()
{
    char key;
    double x,y;

    printf("choose an operator(a,s,m,d:");
    scanf("%c",&key);

    printf("Enter the values x and y");
    scanf("%lf %lf",&x, &y);
    switch(key)
    {
        case 'a':
            printf("%.1lf+%.1lf=%.1lf", x,y,x+y);
            break;
        case 's':
            printf("%.1lf-%.1lf=%.1lf", x,y,x-y);
            break;
        case 'm':
            printf("%.1lf*%.1lf=%.1lf", x,y,x*y);
            break;
        case 'd':
            printf("%.1lf/%.1lf=%.1lf", x,y,x/y);
            break;
        default:
            printf("Invalid key");

    }
getch();
return 0;
}




