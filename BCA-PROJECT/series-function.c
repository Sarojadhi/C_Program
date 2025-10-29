//Write a C program to generate following series using function: 
#include <stdio.h>
int power(int,int);
int fact(int);
void main()
{
	int i,x,n;
	float sum=0,p,f;
	printf("enter value of x and n : ");
	scanf("%d%d",&x,&n);
	printf("Sum =");
	for(i=0;i<n;i++)
	{
		p=power(x,i);
		f=fact(i);
		sum=sum+(p/f);
		printf("(%d^%d)/%d! + ",x,i,i);
	}
	printf("\b\b=%.1f",sum);
}
int power(int a,int b)
{
	if(b==0)
	return 1;
	else 
	return(a*power(a,b-1));
}
int fact(int n)
{
	if(n==0)
	return 1;
	else 
	return(n*fact(n-1));
}

