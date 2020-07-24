#include<stdio.h>
int main()
{
    int a[30],s,i;
    printf("Enter the size of array: ");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    merging(a,0,s-1);
    printf("Sorted array:\n");
    for(i=0; i<s; i++)
    {
        printf("%d\n",a[i]);
    }
}
void merging(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        merging(a,lb,mid);
        merging(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(int a[],int lb,int mid,int ub)
{
    int b[90],i=lb,j=mid+1,k=lb,s;
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
    for(s=lb;s<=ub;s++)
    {
        a[s]=b[s];
    }
}
