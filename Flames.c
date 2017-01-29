#include<stdio.h>
#include<string.h>
int main()
{
int i,j,x,y,c=0,t;
char a[25],b[25],m,q[25],w[25];

printf("\n Enter first name:\n");
scanf("%s",a);
printf("\n Enter second name:\n");
scanf("%s",b);
strcpy(q,a);
strcpy(w,b);
x=strlen(a);
y=strlen(b);
for(i=0;i<x;i++)
{
m=a[i];
for(j=0;j<y;j++)
{
if(m==b[j])
{
a[i]=-1;
b[j]=-1;
c=c-2;
break;
}
}
}
puts(a);
puts(b);
printf("\n Total Remaining letters are:\n");
for(i=0;i<x;i++)
{
if(a[i]!='\0')
{
c++;
printf("%c \t",a[i]);
}
}
printf("\n");
for(j=0;j<y;j++)
{
if(b[j]!='\0')
{
c++;
printf("%c \t",b[j]);
}
}
printf("\nThe count value is=%d\n",c);
t=c;
if(t==5 || t==11 || t==17 ||t==23 )
printf("%s is ENEMY to %s ",q,w);
else if (t==1 || t==7 || t==13 ||t==19 ||t==25)
printf("%s is FRIEND to %s   ",q,w);
else if(t==4 || t==10 || t==16 || t==22 )
printf("%s is going to MARRY %s ?+?",q,w);
else if(t==2 ||t==8||t==14||t==20)
printf("%s is in LOVE with %s",q,w);
else if(t==3||t==9||t==15||t==21)
printf("%s has more AFFECTION on %s ",q,w);
else
printf("%s and %s are SISTERS/BROTHERS ",q,w);
return 0;
}
    