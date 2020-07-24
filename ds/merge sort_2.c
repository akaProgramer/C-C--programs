#include<stdio.h>
int main()
{
    int a[30],n,j,i,l=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter Elements:\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    merge_sort(a,l,n-1);
    printf("Sorted array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
}
void merge_sort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
       mid=(lb+ub)/2;
       merge_sort(a,lb,mid);
       merge_sort(a,mid+1,ub);
       merge(a,lb,mid,ub);
    }
}
void merge(int a[],int lb,int mid,int ub)
{
    int i=lb,j=mid+1,k=lb,b[30],s;
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
             b[k]=a[i];
             i++;
             k++;
        }
    }
    for(s=lb; s<=ub; s++)
    {
        a[s]=b[s];
    }
}
