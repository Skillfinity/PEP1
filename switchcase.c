#include <stdio.h>

int main()
{

     int fi , se,ae,s,m,d;
     char chr;
    printf("entr the two values\n");
    scanf("%d%d",&fi,&se);
    while(1)
    {

        // a for add
        //b fr sub
        //c fr div
        //d fr mul
        // othr error

        printf("what to do\n");
        scanf("%c",&chr);
        getch();
        switch (chr)
        {
        case 1:
            printf("wow its add\n");
            ae=fi+se;
            printf("sum is %d\n",ae);
            break;
        case 2:
            printf("feeling un happy leave me \n ");
            s=fi-se;
            printf("o/p of sub is %d\n",s);
            break;
         case 3:
            printf("why ur divding me\n");
            d=fi/se;
            printf("op div is %d\n",d);
            break;
        case 4:
            printf(" its honor , u made me up\n");
            m=fi*se;
            printf("multi op is%d\n",m);
            break;


        default:
            printf("sorry u entr wrong\n");
            break;
        }
    }
    return 0;
}
