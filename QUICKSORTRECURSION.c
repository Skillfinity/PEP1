#include<stdio.h>
void quicksort(int [10],int,int);
int main(){
  int x[10],size,i;
  printf("Enter size of the array: ");
  scanf("%d",&size);
  printf("\nEnter %d elements: ",size);
  for(i=0;i<size;i++)
    scanf("%d",&x[i]);
 quicksort(x,0,size-1);
 printf("\nSorted elements: ");
  for(i=0;i<size;i++)
    printf(" %d",x[i]);
   return 0;
}
void quicksort(int x[10],int first,int last){
    int k,j,temp,i;

     if(first<last){
         k=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[k]&&i<last)
                 i++;
             while(x[j]>x[k])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[k];
         x[k]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}