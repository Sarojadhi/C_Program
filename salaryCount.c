// WAP TO READ SALARY OF N EMPLOYESS AND COUNT NO.OF EMPLOYEE GETTING SALARY BTN. 50000 AND 70000.
#include<stdio.h>
/* 
int main(){
	int i,n,count=0;
	printf("NO. OF EMPLOYEE : ");
	scanf("%d",&n);
	int salary[n];
	for(i=0;i<n;i++)
	{
		printf("ENTER ALARY OF EMPLOYEE %d : ",i+1);
		scanf("%d",&salary[i]);
		
		if(salary[i]>=50000 && salary[i]<=70000)
		count++;
		
	}
	printf("\n NO OF EMPLOYEE GETTING SALARY BETWEEN 5000 AND 70000 IS %d",count);
	
	return 0;
}
*/


// WAP TO READ WEIGHT OF N PERSON AND DISPLAY SUM AND AVERAGE WEIGHT OF N PERSON . 
/* 
int main(){
	int i,n,totalWeight=0;
	printf("ENTER THE NO OF PEOPLE : ");
	scanf("%d",&n);
	float aw ;
	int weight[n];
	for(i=1;i<=n;i++)
	{
	printf("ENTER WEIGHT OF PERSON %d :",i);
	scanf("%d",&weight[i]);
	totalWeight +=weight[i];
	
	}
	aw=(float)totalWeight/n;
	printf("\n SUM OF WEIGHT =%d AND AVERAGE WEIGHT =%.lf",totalWeight,aw);
	return 0;
	
}

*/ 


// WAP TO READ MATRIX A DISPLAY ELEMENT OF MATRIX . 
/* 
int main(){
	int i,j,row,column;
	printf("NO OF ROWS AND COLUMN : ");
	scanf("%d%d",&row,&column);
	int arr[row][column];
	for(i=0;i<row;i++)
	{
			for(j=0;j<column;j++)
			{
					printf("ENTER ELEMENT ARR[%d][%d] : ",i,j);
				scanf("%d",&arr[i][j]);
			}
	
}

	printf("\n DISPLAYING MATRIX ELEMENT\n");
	
	for(i=0;i<row;i++)
	{
	for(j=0;j<column;j++)
	{
		printf("%d\t",arr[i][j]);
	}

	printf("\n");
}
	return 0;
	
}
*/
// WAP sum of row an column . 
/* 
int main(){
	int i,j,row,column,sum=0;
	printf("NO OF ROWS AND COLUMN : ");
	scanf("%d%d",&row,&column);
	int arr[row][column];
	for(i=0;i<row;i++)
	{
			for(j=0;j<column;j++)
			{
					printf("ENTER ELEMENT ARR[%d][%d] : ",i,j);
				scanf("%d",&arr[i][j]);
			}
	
	}
	for(i=0;i<row;i++)
	{
		for (j=0;j<column;j++)
	{
	
		sum+=arr[i][j];
			
	}
	printf("\n Sum of row %d = %d",i,sum);
	sum=0;
	}
	return 0;
	
}
*/

// WAP FOR TRANSPOSE 
/* 
int main(){
	int i,j,row,column,sum=0;
	printf("NO OF ROWS AND COLUMN : ");
	scanf("%d%d",&row,&column);
	int arr[row][column];
	for(i=0;i<row;i++)
	{
			for(j=0;j<column;j++)
			{
					printf("ENTER ELEMENT ARR[%d][%d] : ",i,j);
				scanf("%d",&arr[i][j]);
			}
	
	}
	printf("\n DISPLAYING TRANSPOSE OF MATRIX\n");

		for (j=0;j<column;j++)
	{
		for(i=0;i<row;i++)
	{
	
	printf("%d\t",arr[i][j]);
}
printf("\n");
	}
	return 0;
	
}
*/

// WAP TO DISPLAY SUM OF EACH COLUMN OF A GIVEN NUMBER MATRIX
int main(){
	int i,j,row,column,sum=0;
	printf("NO OF ROWS AND COLUMN : ");
	scanf("%d%d",&row,&column);
	int arr[row][column];
	for(i=0;i<row;i++)
	{
			for(j=0;j<column;j++)
			{
					printf("ENTER ELEMENT ARR[%d][%d] : ",i,j);
				scanf("%d",&arr[i][j]);
			}
	
	}
	printf("\n DISPLAYING TRANSPOSE OF MATRIX\n");

		for (j=0;j<column;j++)
	{
		for(i=0;i<row;i++)
	{
		sum+=arr[i][j];
	}
	printf("\n sum of column %d =%d ",j,sum);
	sum=0;
			}
	return 0;
	}
