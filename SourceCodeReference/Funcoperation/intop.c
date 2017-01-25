#include "intop.h"
#ifdef INTOP_H

//addition
int add(int a,int b)
{
    return a+b;
}

//subtraction
int sub(int a,int b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}

//multiplication
int mul(int a,int b)
{
    return a*b;
}

//division
int div(int a,int b)
{
    if(a>=b)
        return a/b;
    else
        return b/a;
}

#endif
