//WAP to display upper trianglar matrix.
#include<stdio.h>
void main()
{
	int row,column,i,j;
	printf("No of rows and Columns:");
	scanf("%d%d",&row,&column);
	if(row!=column)
	    printf("Order should be same");
	else
	{
		int arr[row][column];
		for(i=0;i<row;i++)
		{
			for(j=0;j<column;j++)
			{
				if(i>j)
				arr[i][j]=0;
				else
				{
					printf("Enter element arr[%d][%d]:",i,j);
					scanf("%d",&arr[i][j]);
				}
			}
		}
			printf("\nDisplaying Upper Triangular matrix\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<column;j++)
				{
					printf("%d\t",arr[i][j]);
				}
				printf("\n");
			}
		}
	}

