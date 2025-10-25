//Write a program to display sum of each row of given matrix.
#include<stdio.h>
void main()
{
	int row,column,i,j;
	printf("Enter row and column of matrix :");
	scanf("%d%d",&row,&column);
    int arr[row][column],sum=0;	
 for(i=0;i<row;i++)
 {
 	for(j=0;j<column;j++)
	 {
 		printf("Enter element [%d][%d] :",i+1,j+1);
 		scanf("%d",&arr[i][j]);
	 }
 }
 for(i=0;i<row;i++)
 {
 	sum=0;
 	for(j=0;j<column;j++)
	 {
 	  sum=sum+arr[i][j];
	 }
	 printf("Sum of %d row is %d\n",i+1,sum);
 }
}
