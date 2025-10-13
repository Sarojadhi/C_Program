//WAP to display area and circumference of circle by using function.
#include<stdio.h>
void area(int);
void circumference(int);
void main()
{
	int rad;
	printf("Enter radius of circle:");
	scanf("%d",&rad);
	area(rad);
	circumference(rad);
}
void area(int r)
{
	printf("Area of circle= %.2f\n",3.14*r*r);
}
void circumference(int r)
{
	printf("Circumference of circle= %.2f\n",2*3.14*r);
}
