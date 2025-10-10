// WAP TO SEARCH AN ELEMENT FROM N ELEMETN FORM N ELEMENT IN ARRAY 
# include<stdio.h>
/* 
int main(){
	
	int i,n,search;
	printf("NO. OF ELEMENT IN AN ARRAY : ");
	scanf("%d",&n);
	int arr[n];
	for (i==0;i<n;i++)
	{
		printf("ENTER THE VALUE oF arr[%d] : ",i);
		scanf("%d",arr[i]);
		
		}
		printf("\n ENTER A ELEMENT TO BE SEARCHED : ");
		scanf("%d",&search);
		for (i=0;i<n;i++)
		{
			if(search==arr[i])

				printf("%d is found ",search);
				break;
	}
		}
		if(i==n)
			
			printf("%d is not found ",search);
	return 0;
}

*/ 
// WAP TO FIND THE SMALLEST AND LARGEST ELEMENT IN AN ARRAY . 
/*
int main(){
	int i,n,small,large;
	printf("ENTER A NUMBER OF ELEMENT IN ARRAY: ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		printf("enter the value of array[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	small=arr[0];
	large=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<small)
		small=arr[i];
		if(arr[i]>large)
		large=arr[i];
	}
		printf("\n SMALLEST ELEMENT = %d AND LARGEST ELEMENT = %d ",small,large);
	
	return 0;
	
}
*/

//WAP TO SORT N ELEMENT IN AN ARRAY IN ASCENDING ORDER (selection sort )

/*
int main(){
		int i,n,j,temp;
	printf("ENTER A NUMBER OF ELEMENT IN ARRAY: ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		printf("enter the value of array[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		
	
		for(j=i+1;j<n;j++)
	{
	
	if(arr[i]>arr[j])
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	
		}
		}
	}
	printf("\n DISPLAYING ELEMENT IN ASCENDING ORDER\n");
	for (i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	
}
	return 0;
} 
*/


//WAP TO SORT N ELEMENT IN AN ARRAY IN ASCENDING ORDER (BUBBLE sort )


int main(){
		int i,n,j,temp;
	printf("ENTER A NUMBER OF ELEMENT IN ARRAY: ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		printf("enter the value of array[%d] : ",i);
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
	printf("\n DISPLAYING ELEMENT IN ASCENDING ORDER\n");
	for (i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	
}
	return 0;
} 



