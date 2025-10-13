//WAP to display area of rectangle using function
#include<stdio.h>
void area(int,int);
void main()
{
	int l,b;
	printf("Enter length and breadth of rectangle:");
	scanf("%d%d",&l,&b);
	area(l,b);
}
void area(int x, int y)
{
	int a;
	a=x*y;
	printf("Area of rectangle =%d",a);
}
