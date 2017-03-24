#include <stdio.h>

int main()
{
    printf("Hello World!\n");
     while (1)
     {
         int score;
         //0-45% thn fail
         //45-55% thn second class
         //55-65% thn first class
         //65-100% thn your topper
         printf("entr ur  marks i will say wch class u belongs to\n");
         scanf("%d",&score);
         if(score<=45)
         {
             printf("fail\n");
         }
         else if(score>45 && score<=55)
         {
             printf("second class\n");

         }
         else if( score>55 && score<=65)
         {
             printf("first\n");
         }
         else if (score<65 && score <=100)
         {
             printf("topper\n");

         }
         else
         {
             printf(" r u using apsara pencile bcz u got extra marks\n");
         }
     }
    return 0;
}
