#include<stdio.h>

int main()
{
    int x,y,z;
    char operation;

    printf("Enter the two values\n");
    scanf("%d%d", &x, &y);

    printf("Define operation\n");
    scanf("%c", &operation);

    switch(operation)
    {
        case 'a': z = x + y;
         printf("%d",z);
        break;
        case 's': z = x - y;
         printf("%d",z);
        break;
        case 'd': z = x / y;
         printf("%d",z);
        break;
        case 'm': z = x * y;
         printf("%d",z);
        break;
        default:
            printf("Error");
        break;
    }
    return 0;
}
