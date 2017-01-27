#include <stdio.h>
#include <conio.h>

void main()
{
    int x,y;
    printf("Enter the value of x and y\n");
    scanf("%d%d", &x,&y);
    if(x<y)
        printf("x is less than y ");
    else if(x>y)
        printf("x is greater than y");
    else
        printf("x is equal to y");
    getch();
}
