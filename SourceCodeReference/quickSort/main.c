#include<stdio.h>
void quicksort(int[],int,int);
int partition(int[],int,int);

int main()
{
    int a[50],n,i;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("\nEnter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    quicksort(a,0,n-1);
    printf("\nSorted array:\n");

    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}

void quicksort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quicksort(a,l,j-1);
        quicksort(a,j+1,u);
    }

}

int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;

    do
    {
        do
            i++;
        while(a[i]<v&&i<=u);
            do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }
    while(i<j);
          a[l]=a[j];
          a[j]=v;

          return j;
}
