#include<stdio.h>
void main()
{
	int s,k,temp;
	printf("enter the two numbers : ");
	scanf("%d%d",&s,&k);
	printf("\nbefore swap : s=%d,k=%d",s,k);
	temp=s;
	s=k;
	k=temp;
	printf("\nafter swap : s=%d,k=%d",s,k);
}
