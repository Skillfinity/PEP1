#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
	unsigned int a;
	short int b;
	unsigned short int c;
	long int d;
	unsigned long int e;
	signed int f;
	char g;
	unsigned char h;
	signed char i;
  printf("Storage size for int : %d \n", sizeof(int));
  printf("Storage size for unsigned int: %u \n", sizeof(a));
  printf("Storage size for short int: %hi \n", sizeof(b));
  printf("Storage size for unsigned short int : %hu \n", sizeof(c));
  printf("Storage size for long int : %ld \n", sizeof(d));
  printf("Storage size for unsigned long int : %lu \n", sizeof(e));
  printf("Storage size for signed int: %i \n", sizeof(f));
  printf("Storage size for char : %d \n", sizeof(g));
  printf("Storage size for unsigned char : %d \n", sizeof(h));
  printf("Storage size for signed char : %d \n", sizeof(i));
   printf("Storage size for float : %d \n", sizeof(float));
   printf("Minimum float positive value: %E\n", FLT_MIN );
   printf("Maximum float positive value: %E\n", FLT_MAX );
   printf("Precision value: %d\n", FLT_DIG );
   printf("Storage size for double : %g \n", sizeof(double));
   printf("Storage size for long double : %e \n", sizeof(long double ));
   printf("Storage size for unsigned float : %lu \n", sizeof(float));
    printf("Storage size for unsigned double : %lu \n", sizeof(double));
   printf("Storage size for unsigned long double : %llu \n", sizeof(long double ));
   printf("Storage size for signed float : %d \n", sizeof(float));
   return 0;
}
 
