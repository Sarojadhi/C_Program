//Write a C program to calculate sum of the natural number up to N number using recursive functions.  
#include<stdio.h>
int sum(int);
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Sum of %d natural numbers = %d",num,sum(num));
}
int sum(int n)
{
	if(n<=0)
	return 0;
	else
	return(n+sum(n-1));
}
