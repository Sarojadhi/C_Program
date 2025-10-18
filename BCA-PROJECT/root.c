#include<stdio.h>
#include<math.h>
void main()
{
	float x,y,d,A;
	printf("enter the value of x and y : ");
	scanf("%f%f",&x,&y);
	d=(y*y)+5;
	A = 5*x*sqrt(d);
	printf("the result is %.2f",A);
}