#include<stdio.h>

int main() 
{
    int x, y;
    long long a;
    double b;
    printf("enter first integer : ");
    scanf("%d", &x);
    printf("\nenter second integer : ");
    scanf("%d", &y);
    a = (long long)x-(long long)y;
    if (a == 0) 
    {
        printf("\nx is equal to y.");
    }
    else 
    {
        b = *(double*)&a;
        if (b == b) 
        {
         printf("\nx is greater than y.");
        }
        else 
        {
         printf("\ny is greater than x.");
        }
    }
        return 0 ;
}
