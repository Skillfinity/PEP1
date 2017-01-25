#include "floatop.h"
#ifdef FLOATOP_H

//addition
float add(float a,float b)
{
    return a+b;
}

//subtraction
float sub(float a,float b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}

//multiplication
float mul(float a,float b)
{
    return a*b;
}

//division
float div(float a,float b)
{
    if(a>=b)
        return a/b;
    else
        return b/a;
}

#endif
