/*WAP to display following fibonacci series
0 1 1 2 3 5 8 .... n terms.*/
#include<stdio.h>
void main()
{
	int a=0,b=1,c,i,nterm;
	printf("no. of terms:");
	scanf("%d",&nterm);
	for(i=1;i<=nterm;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
}
