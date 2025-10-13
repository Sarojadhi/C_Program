//WAP to count no. of digits in any given number using function.
#include<stdio.h>
void noofdigit(int);
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	noofdigit(num);
}
void noofdigit(int n)
{
	int count=0;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("No of digits = %d",count);
}
