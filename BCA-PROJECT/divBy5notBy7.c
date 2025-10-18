/*WAP to find the number that is exatly divisible by 5
 but not by 7. */
#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%5==0&&n%7!=0)
	printf("%d is required number",n);
	else
	printf("%d is not required number",n);
}
