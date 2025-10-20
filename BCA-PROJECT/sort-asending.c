//Write a program to sort �n� elements in an array in ascending order. 
#include<stdio.h>
void main()
{
	int i,j,n,temp;
	printf("No. of elements in an array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the value of arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-1-i;j++)
    	{
    		if(arr[j]>arr[j+1])
    	{
    	    temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;	
		}	
		
      }
	}
	printf("\nDisplaying elements in ascending order\n");
		for(i=0;i<n;i++)
		{
			printf("%d\n",arr[i]);
		}
}
