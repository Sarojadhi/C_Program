//WAP to display sum of two matrix.
#include<stdio.h>
void main()
{
	int i,j,r1,c1,r2,c2;
	printf("Order of first matrix:");
	scanf("%d%d",&r1,&c1);
	printf("Order of second matrix:");
	scanf("%d%d",&r2,&c2);
	if(r1==r2&&c1==c2)
	{
		int A[r1][c1],B[r2][c2],C[r1][c1];
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
			printf("Enter element for A[%d][%d]:",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
			printf("Enter element for B[%d][%d]:",i,j);
			scanf("%d",&B[i][j]);
		}
    }
    printf("\nDisplay difference of two matrix\n");
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	{
    		C[i][j]=A[i][j]-B[i][j];
    		printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
  }
  else
  printf("Order should be same");
}
