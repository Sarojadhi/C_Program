//WAP to display whether given number is negative or positive or zero
#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>0)
	printf("%d is positive",n);
	else if(n<0)
	printf("%d is negative",n);
	else
	printf("given number is zero");
}
