#include<stdio.h>
#include<conio.h>
int main()
{
         int x,y,sum,sub,mul,div;
         char choice;

         printf("Enter \n 'a' to perform addition \n 's' to perform subtraction \n");
         printf(" 'm' to perform multiplication \n 'd' to perform division \n");
         scanf("%c",&choice);

         printf("Enter two integer values:\n");
         printf("x=");
         scanf("%d",&x);
         printf("y=");
         scanf("%d",&y);

         switch(choice)
         {
              case 'a': sum = x + y;
              printf("Sum = %d\n",sum);
              break;


              case 's': sub = x - y;
              printf("Difference = %d\n",sub);
              break;

              case 'm': mul = x * y;
              printf("Multiplication = %d\n",mul);
              break;

              case 'd': div = x / y;
              printf("Division = %d\n",div);
              break;

              default : printf("ERROR");
        }

         getch();
         return 0;
}
