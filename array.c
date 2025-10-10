/*
#include<stdio.h>
void search (int[],int);
void main()
{
	int n,i;
	printf("no.of element in array :");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		printf("ENTER THE ELEMENT arr[%d]\n: ",i+1);

	}
	search(arr,n);
}
void search(int brr[],int size)
{
	int search,i;
	printf("element to be searched : ");
	scanf("%d",&search);
 for (i=0;i<size;i++)
	{
		if(search==brr[i])
		{
			printf("%d is  found",search);
			break;
		}
	}
	if (i==size)
	printf("%d is not  found",search);
}
*/

#include<stdio.h>
void small_large(int[],int);
void main()
{
	int n,i;
	printf("no.of element in array :");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		printf("ENTER THE ELEMENT arr[%d]\n: ",i+1);
		scanf("d",&arr[i]);

	}
	small_large(arr,n);
}
void small_large(int brr[],int size)
{
	int small,large,i;
	small= brr[0];
	large=brr[0];
	
	for (i=0;i<size;i++)
	{
		
		if(small>brr[i])
		small=brr[i];
		if(large<brr[i])
		large=brr[i];
}
	printf("\n Smallest element =%d and largest element is =%d",small,large);
}