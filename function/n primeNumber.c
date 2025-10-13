//WAP to display n prime numbers using function.
#include<stdio.h>
void primenumbers(int);
void main()
{
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	primenumbers(number);
}
void primenumbers(int num)
{
	int i,n,factor=0,count=0;
	for(n=1;count!=num;n++)
	{
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
		    factor++;
		}
	if(factor==2)
	     printf("%d\t",n);
         count++;
         factor=0;
     }
 }
