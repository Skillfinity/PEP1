#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int x,y,z,i,j,r,s,g,h;

  char name1[22],name2[22],a[11]={' ','F','L','A','M','E','S'},b[11];

    printf("Enter the name1:\n");
    scanf("%s",name1);

    printf("Enter the name2:\n");
    scanf("%s",name2);

    x=strlen(name1);
    y=strlen(name2);
    z=x+y;

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
            {
                if(name1[i]==name2[j])
                {
                    name1[i]=name2[j]=' ';
                        z=z-2;

                        break;

                }
            }
    }
    for(r=6;r>1;r--)
    {

        s=z%r;

        if(s==0)
        {
            s=r;
            i=1;
        }
        else
        {
            a[s]='/o';
            i=s+1;
        }
            j=1;
        while(1)
        {
            if(i==s)
            {
                break;
            }
        b[j]=a[i];

        if(i==r)
        {
            i=0;
        }
         i++;
         j++;
    }

    for(i=1;i<=r-1;i++)
    {

      a[i]=b[i];

    }

 }
    printf("\nRelationship status:\n");
        switch(a[1])
        {
        case 'F':
            printf("FRIENDSHIP\n");
        break;
        case 'L':
            printf("LOVE\n");
        break;
        case 'A':
            printf("AFFECTION\n");
        break;
        case 'M':
            printf("MARRIAGE\n");
        break;
        case 'E':
            printf("ENMITY\n");
        break;
        case 'S':
            printf("SISTER\n");
        break;
        default:
            printf("ERROR\n");
        }
}
