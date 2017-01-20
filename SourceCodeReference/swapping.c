#include<stdio.h>
int main()
{
    int a=7,b=5;
    printf("before swapping: a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping: a=%d and b=%d\n",a,b);
    return 0;
}
