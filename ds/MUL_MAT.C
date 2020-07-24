/* Program for multiplying two matrixes */
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][3],b[3][3],i,j,k,sum,m[3][3];
	system("cls");
	printf("Enter the elements for matrix:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements for matrix:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
		sum=0;
			for (k=0; k<3; k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			m[i][j]=sum;
		}
	}
	printf("\nMultiplcation of matrix:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("%4d",m[i][j]);
		}
		printf("\n");
	}
	getch();
}




