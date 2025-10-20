/*Write a program to read salaries of n employees and count 
the number of employees getting salary between 45,000 to 70,000. */
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter no of employees :");
	scanf("%d",&n);
	int arr[n],count=0;
	for(i=0;i<n;i++)
	{
		printf("Enter salary of [%d] employee :",i+1);
		scanf("%d",&arr[i]);
		if(arr[i]>=45000 && arr[i]<=70000)
		{
			count++;
		}
	}
	printf("The no of employees getting salary between 45000 to 70000  is %d",count);
}

