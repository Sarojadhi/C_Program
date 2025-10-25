//Write a program to display sum of diagonal elements of 3x3 matrix.
#include<stdio.h>
void main()
{
	printf("enter 3x3 matrix: \n");
	int row=3,column=3,i,j,sum=0;
		int arr[row][column];
		for(i=0;i<row;i++)
		{
			for(j=0;j<column;j++)
			{
				printf("Enter element arr[%d][%d]:",i,j);
				scanf("%d",&arr[i][j]);
				if(i==j)
				sum=sum+arr[i][j];
			}
		}
		printf("\nSum of diagonal elements =%d",sum);
	}

