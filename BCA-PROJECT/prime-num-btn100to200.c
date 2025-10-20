// Write a program to display prime numbers between 100 and 200
#include<stdio.h>
void main()
{
	int i,j,prime;
	printf("prime number from 100-200: \n");
	for(i=100;i<200;i++)
	{
		prime=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				prime=0;
				break;
			}
		}
		if(prime)
		printf("%d\t",i);
	}
}

