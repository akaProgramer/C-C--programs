/* Program for multiplication of Matrix of any but correct order*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[10][10],b[10][10],m[10][10],sum,r,c,w,n,k;
	system("cls");
	printf("Enter order of 1st matrix: ");
	scanf("%d%d",&r,&c);
	printf("Enter the order of 2nd matrix: ");
	scanf("%d%d",&w,&n);
	if (c!=w)
	{
		printf("\nmatrix multiplication of given order is not possible");
		getch();
		exit(0);
	}
	else
	{
		printf("\nEnter the value for 1st matrix:\n");
		for (i=0; i<r; i++)
		{
			for (j=0; j<c; j++)
			{
				printf("Enter values for A[%d,%d]: ",i+1,j+1);
				scanf("%d",&a[i][j]);
			}
		}
		printf("\nEnter the elements for 2nd matrix:\n");
		for (i=0; i<w; i++)
		{
			for (j=0; j<n; j++)
			{
				printf("Enter value for B[%d,%d]: ",i+1,j+1);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0; i<r; i++)
		{
			for (j=0; j<n; j++)
			{
				sum=0;
				for (k=0; k<c; k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				m[i][j]=sum;
			}
		}
		printf("\nMultiplcation of matrix:\n");
		for (i=0; i<c; i++)
		{
			for (j=0; j<w; j++)
			{
				printf("%4d",m[i][j]);
			}
			printf("\n");
		}
	}
	getch();
}



