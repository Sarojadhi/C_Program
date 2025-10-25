//WAP to display transpose of a given mxn matrix.
#include<stdio.h>
void main()
{
	int i,j,row,column;
	printf("No. of row and column:");
	scanf("%d%d",&row,&column);
	int arr[row][column];
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("Enter element arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Displaying matrix: \n");
		for(i=0;i<row;i++)
		{
		for(j=0;j<column;j++)
		{
			printf("%d\t",arr[i][j]);
			
		}
		printf("\n");
	}
	printf("\nDisplaying Transpose of matrix\n");
	for(j=0;j<column;j++)
	{
			for(i=0;i<row;i++)
			{
				printf("%d\t",arr[i][j]);
			}
			printf("\n");
	}
}
