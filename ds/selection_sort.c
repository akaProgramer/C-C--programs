#include<stdio.h>
int min(int a[],int k,int n)
{
    int mini,loc,j;
    mini=a[k];
    for(j=k+1;j<=n-1;j++)
    {
        if(mini>a[j])
        {
            mini=a[j];
            loc=j;
        }
    }
    return(loc);
}
int main()
{
    int a[10],i,k,loc,temp;
    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for (k=0;k<9;k++)
    {
        loc=min(a,k,10);
        temp=a[k];
        a[k]=a[loc];
        a[loc]=temp;
    }
        for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
