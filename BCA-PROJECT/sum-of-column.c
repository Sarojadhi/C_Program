//WAP to display sum of each column of a given mxn matrix.
#include<stdio.h>
void main()
{
	int i,j,row,column,sum=0;
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
	for(j=0;j<column;j++)
	{
			for(i=0;i<row;i++)
			{
		    sum=sum+arr[i][j];
		    }
			{
				printf("\nSum of Column %d =%d",j,sum);
				sum=0;
	}
	
  }
}
