//Write a program to display first n even numbers. 
#include<stdio.h>
void main()
{
	int n,e=2,i;
	printf("enter the value of n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",e);
		e=e+2;	
	}
}
