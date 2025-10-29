//Write a program to display transpose of mxn matrix by using pointer.
#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("Enter no of rows and column :");
	scanf("%d%d",&r,&c);
	int arr[r][c],*ptr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element [%d][%d] :",i+1,j+1);
			scanf("%d",&arr[i][j]);
			ptr[i][j]=&arr[i][j];
		}
	}
	printf("The matrix is :\n");
		for(i=0;i<r;i++)
		{
		for(j=0;j<c;j++)
		{
			printf("%d\t",*ptr[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of matrix is :\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",*ptr[j][i]);
		}
		printf("\n");
	}
}
