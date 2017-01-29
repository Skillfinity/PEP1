
#include<stdio.h>
#include<string.h>
void main()
{
int i,j,str1,str2,count=0,t;
char m_name[30],f_name[30];

printf("\n enter male name:\n");
gets(m_name);
printf("\n enter female name:\n");
gets(f_name);
str1=strlen(m_name);
str2=strlen(f_name);
for(i=0;i<str1;i++)
{
for(j=0;j<str2;j++)
{
if(m_name[i]==f_name[j])
{
m_name[i]='\0';
f_name[j]='\0';
}
}
}
printf("\n REMAINING LATTERS:\n");
for(i=0;i<str1;i++)
{
if(m_name[i]!='\0')
{
count++;
printf("%c \t",m_name[i]);
}
}
printf("\n");
for(j=0;j<str2;j++)
{
if(f_name[j]!='\0')
{
count++;
printf("%c \t",f_name[j]);
}
}
printf("\n count=%d\n",count);
t=count;
if(t==5 || t==11 || t==17 ||t==23 || t==29)
printf("ENEMY");
else
       if(t==7 || t==13 || t==19|| t==25 || t==1)

printf("FRIEND");
else if
        (t==4 || t==10 || t==16 || t==22 || t==28)
printf("MARRY");
else if(t==2|| t==8 || t==14 || t==20 || t==26)
printf("LOVE");
else if(t==3|| t==9 || t==15 || t==21 || t==27)
printf("AFFECTION");
else
printf("SISTERS/BROTHERS");
return(0);
}
