#include <stdio.h>

int main()
{
    int oddno=1,limit;
    printf("Enter the value of limit till which odd number is to be printed");
    scanf("%d",&limit);
    if(limit==0)
    {
        printf("No odd number to print");
    }
    for(oddno=1;oddno<=limit;oddno=oddno+2)
    {



        printf("%d\n",oddno);
    }
    return 0;
}


/*
#include <stdio.h>

int main()
{
    int oddno=1,limit;
    printf("Enter the value of limit till which odd number is to be printed\n");
    scanf("%d",&limit);
    if(limit==0)
    {
        printf("No odd number to print\n");
    }
    for(oddno=0;oddno<=limit;oddno++)
    {
        if(oddno % 2 == 0)
        {
            continue;
        }



        printf("%d\n",oddno);
    }
    return 0;
}
*/
