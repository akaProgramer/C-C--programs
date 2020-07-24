#include<stdio.h>
int main()
{
    int n,a[10],i,j,temp;
    printf("Enter a 10 element:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++)
    {
        temp=a[i];
        for(j=i-1; j>=0&&temp<a[j]; j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    printf("sorted array:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}
