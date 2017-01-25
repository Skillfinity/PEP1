#include <stdio.h>
int main()
{
  int i,x;

  printf("Print odd numbers till ");
  scanf("%d", &x);

  printf("Odd numbers from 1 to %d are: \n",x);

  for(i=1; i<=x; i=i+2)
    {
      printf("%d\n", i);
    }
  return 0;
}
