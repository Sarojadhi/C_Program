//Write a program to read a number and display the reverse number.  
#include<stdio.h>
void main()
{
	int n,a,digit,rev=0;
	printf("Enter a number to be reversed : ");
	scanf("%d",&n);
	while(n!=0)
	{
		digit= n%10;
		rev= rev*10+digit;
		n= n/10;
	}
	printf("The reversed number is %d",rev);
}
