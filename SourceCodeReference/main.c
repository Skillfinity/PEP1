#include"op_float.h"
#include"op_int.h"
#include <stdio.h>
#include<math.h>
float n1,n2;
int main()
{
    int Flag=1;
    int op=0;
    while(Flag!=0)
    {
        printf("Enter first number\n");
        scanf("%f",&n1);
        printf("Enter second number\n");
        scanf("%f",&n2);
        printf("Enter '1' for float operation\n Enter '0' for int operation \n");
        scanf("%d",&op);
        if(op==1)//Float
        {
            float_operation();
        }
        else if(op==0)//integer
        {
            int_operation();
        }
        printf("\nTo stop execution press 0, \nto continue execution press any other number\n");
        scanf("%d",&Flag);
        printf("\n");
    }
    return 0;
}
