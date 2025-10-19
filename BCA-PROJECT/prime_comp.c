//Write a program to find input number is prime or composite. 
#include<stdio.h>
int main()
{
	int n,s=0,i;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			s++;
	}
	if(s==2)
		printf("The number %d is prime ",n);
	else
		printf("The number %d is composite",n);
	return 0;
}
