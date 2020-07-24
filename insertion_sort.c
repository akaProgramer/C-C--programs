#include<stdio.h>
void insert_sort(int [],int);
int main()
{
    int j,i,a[10];
    printf("Enter values for:\n\n");
    for(j=0; j<10; j++)
    {
        scanf("%d",&a[j]);
    }
    insert_sort(a,9);
    printf("\n\nSorted Array:\n");
    for(i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
}
void insert_sort(int a[],int N)
{
    int i,j,temp;
    for(i=0; i<N; i++)
    {
        temp=a[i];
        for(j=i-1; j>=0&&temp<a[j]; j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
}
