#include<stdio.h>

void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);

int main()
{
	int a[30],n,i;
	printf("Enter no of elements:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	mergesort(a,0,n-1);

	printf("\nSorted array is :");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
    getch();
	return 0;
}

void mergesort(int a[],int lb,int ub)
{
	int mid;

	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,mid+1,ub);
	}
}

void merge(int a[],int i1,int j1,int i2,int j2)
{
	int temp[50];
	int i,j,k;
	i=i1;
	j=i2;
	k=0;

	while(i<=j1 && j<=j2)
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}

	while(i<=j1)
		temp[k++]=a[i++];

	while(j<=j2)
		temp[k++]=a[j++];


	for(i=i1,j=0;i<=j2;i++,j++)
		a[i]=temp[j];
}
