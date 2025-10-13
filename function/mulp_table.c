//WAP to display multiplication table of a number by using function
#include<stdio.h>
void multiplicationtable(int);
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	multiplicationtable(num);
}
void multiplicationtable(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
}
