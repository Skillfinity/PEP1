#include <stdio.h>
int main()
{
    int n1=0,n2=1,next_no =0,x;
printf("Enter a positive number: ");
    scanf("%d", &x);
    printf("\nFibonacci Series:%d,%d,",n1,n2);
    next_no = n1 + n2;
    while(next_no<= x)
    {
     printf("%d,",next_no);
        n1 = n2;
        n2 = next_no;
        next_no = n1 + n2;
    }
    
    return 0;
}
