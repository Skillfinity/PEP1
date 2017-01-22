#include<stdio.h>
#include"funcheader1.h"
int a,b;
int getsum(int a,int b)
{
static int sum=0;
{
sum = a + b;
}
return sum;
}
