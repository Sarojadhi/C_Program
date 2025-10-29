//Write a program to find sum of 10 numbers using pointer. 
#include<stdio.h>
void main()
{
	int i,n[10],*ptr[10],sum=0;
	for(i=0;i<10;i++)
	{
		printf("Enter element [%d] :",i+1);
		scanf("%d",&n[i]);
		ptr[i]=&n[i];
		sum=sum+*ptr[i];
	}
	printf("Sum of the numbers is %d",sum);
}
