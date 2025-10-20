//Write a program to search an element from �n� elements in an array.  
#include<stdio.h>
void main(){
	int n,i;
	printf("Enter how many numbers :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter element [%d] :",i+1);
		scanf("%d",&arr[i]);
		
	}
	int search;
	printf("Enter search element :");
	scanf("%d",&search);
		for(i=0;i<n;i++)
		{
		if(arr[i]==search)
		{
			printf("%d is found at position %d\n ",arr[i],i+1);
			break;
		}
	}
	if(arr[i]!=search)
	{
		printf("Not found");
	}
}
