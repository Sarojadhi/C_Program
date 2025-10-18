//WAP to find the roots of quadratic equation
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c;
	float d,x1,x2;
	printf("Enter the value of a,b and c:");
	scanf("%f%f%f",&a,&b,&c);
	d=sqrt(b*b-4*a*c);
	x1=(-b+d)/(2*a);
	x2=(-b-d)/(2*a);
	printf("x1 = %.2f \nx2 = %.2f",x1,x2);
}
