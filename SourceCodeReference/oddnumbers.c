#include <stdio.h>
#include <conio.h>

int main()
{
    int x, a=1;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    printf("odd numbers between 0 and %d are: \n", x);
    while(a<=x)
    {
        printf("%d\n",a);
        a=a+2;
    }
    getch();
    return 0;
}
