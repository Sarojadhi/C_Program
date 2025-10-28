//Write a macro code to display area of circle
#include<stdio.h>
#define area(r) 3.14*r*r
void main()
{
	int radius;
	printf("Enter radius of circle:");
	scanf("%d",&radius);
    printf("Area of circle = %.1f",area(radius));
}
