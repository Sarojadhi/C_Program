//WAP to display whether given number is even or odd by using function
#include<stdio.h>
void evenodd(int);
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	evenodd(num);
}
void evenodd(int n)
{
	if(n%2==0)
	printf("%d is even",n);
	else
	printf("%d is odd",n);
}
