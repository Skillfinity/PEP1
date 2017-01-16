#include <stdio.h>

int main()
{
    int x, y;

        printf("Enter the value of x: \n");
        scanf("%d", &x);

        printf("Enter the value of y: \n");
        scanf("%d",&y);

        // Swapping process

        x = x - y;
        y = x + y;
        x = y - x;

        printf("after swapping the value of x= %d\n",x);
        printf("after swapping the value of y= %d\n",y);

        return 0;
}
