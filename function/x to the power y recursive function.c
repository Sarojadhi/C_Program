//WAP to display x to the power y using recursive function.
#include<stdio.h>
int power(int,int);
void main()
{
	int x,y;
	printf("Enter the value of x and y:");
	scanf("%d%d",&x,&y);
	printf("\n%d to the power %d = %d",x,y,power(x,y));
}
int power(int a,int b)
{
	if(b==0)
	return 1;
	else
	return(a*power(a,b-1));
} 