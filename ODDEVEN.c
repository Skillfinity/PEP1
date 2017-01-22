#include <stdio.h>
int main()
{
    int i,x;
    printf("Print odd numbers till: ");
    scanf("%d", &x);
 printf("All odd numbers from 1 to %d are: \n",x);
    for(i=1; i<=x; i++)
    {
        /* Check if the number is odd then print */
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
