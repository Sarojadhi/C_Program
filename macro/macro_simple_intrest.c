//Write a macro code to display simple interest
#include<stdio.h>
#define simpleinterest(p,t,r)p*t*r/100
void main()
{
	int p;
	float t,r;
	printf("Enter principle, time and rate:");
	scanf("%d%f%f",&p,&t,&r);
    printf("Simple Interest = %.1f",simpleinterest(p,t,r));
}
