/* Program for Bubble Sort */
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,n,c=0;
	printf("Enter values for sorting:\n");
	for (i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0; i<9; i++)
	{
		for (n=i+1; n<10; n++)
		{
			if(a[i]>a[n])
			{
				c=a[i];
				a[i]=a[n];
				a[n]=c;
			}
		}
	}
	printf("sorted numbers are:\n");
	for (i=0; i<10; i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
