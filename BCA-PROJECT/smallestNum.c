//Write a program to find smallest number from the array using function.
#include<stdio.h>
void check(int [],int );
void main()
{
	int i,n;
	printf("Enter how many number :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element [%d] :",i+1);
		scanf("%d",&arr[i]);
	}
	check(arr,n);
} 
void check(int numbers[],int size)
{
	int small,i;
	small=numbers[0];
	for(i=0;i<size;i++)
	{
		if(numbers[i]<small)
		{
			small=numbers[i];
		}
	}
	printf("Smallest number is %d",small);
}
