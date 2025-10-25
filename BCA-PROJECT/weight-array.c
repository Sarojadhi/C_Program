//Write a program to calculate sum and average of weight of n persons using an array. 
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter no of persons :");
	scanf("%d",&n);
	float arr[n],avg,sum=0;
	for(i=0;i<n;i++)
	{
		printf("Enter person [%d] weight :",i+1);
		scanf("%f",&arr[i]);
		sum=sum+arr[i];
	}
	avg=sum/n;
	printf("sum of weight :%.2f\n Average of weight :%.2f",sum,avg);
}
