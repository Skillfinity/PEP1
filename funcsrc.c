#include<stdio.h>
#include "funcheader.h"
extern int a,b;
extern int multiply(int a,int b)
{
static int p=0,i=0;
if(i < a)
{
p =p+ b;
i++;
multiply(a,b);
}
return p;
}
