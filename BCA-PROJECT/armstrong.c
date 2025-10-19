//WAP to check whether given number is armstong or not.
#include<stdio.h>
#include<math.h>
void main()
{
	int n,num,digit,sum=0,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
    num=n;
	while(num>0)
	{
		num=num/10;
		count++;
	}
	num=n;
	while(num>0)
	{
		digit=num%10;
		sum=sum+pow(digit,count);
		num=num/10;
	}
	if(sum==n)
      	printf("%d is armstong number",n);
	else
		printf("%d is not armstong number",n);
}
