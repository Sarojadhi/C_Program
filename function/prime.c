//WAP to display whether given number is prime or composite by using function
#include<stdio.h>
void primecomposite(int);
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	primecomposite(num);
}
void primecomposite(int n)
{
	int i,factor=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		factor++;
	}
	if(factor==2)
	     printf("%d is prime number",n);
    else
         printf("%d is composite number",n);
}
