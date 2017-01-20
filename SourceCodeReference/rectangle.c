#include<stdio.h>
#include<conio.h>

int main()
{
    int length,width,area,perimeter;
    float diagonal_length;

    printf("enter the value of length and width:");
    scanf("%d%d", &length, &width);

    area= length * width;
    perimeter= 2*length + 2*width;
    diagonal_length= sqrt(length*length + width*width);

    printf("area=%d\n",area);
    printf("perimeter=%d\n",perimeter);
    printf("diagonal_length=%f\n",diagonal_length);
    return 0;
}
