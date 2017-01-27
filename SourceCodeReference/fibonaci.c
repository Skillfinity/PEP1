#include <stdio.h>
#include <CONIO.h>

int main()
{
    int x, num1=0, num2=1, k,i;
    printf("Enter the value of x\n");
    scanf("%d", &x);
    printf("Fibonaci Series from 0 to %d is:\n",x);
    printf("%d\n%d\n", num1,num2);
    for(i=2;i<=x;i++)
    {

        k=num1+num2;
        if(k<=x)
        {
            printf("%d\n",k);

            num1=num2;
            num2=k;
        }

    }
    getch();
    return 0;
}
