//Write a program to input n names and sort them in alphabetical order.
#include<stdio.h>
#include<string.h>
void main()
{
	int i,n,j;
	printf("Enter no of people :");
	scanf("%d",&n);
	char arr[n][100],temp[100];
	for(i=0;i<n;i++)
	{
		printf("Enter [%d] person name : ",i+1);
		scanf("%s",&arr[i]);
	}
	printf("\nName in ascending order is :\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(arr[i],arr[j])>0)
			{
				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],temp);
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%s\n",arr[i]);
	}
}
