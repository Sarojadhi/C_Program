// EXAMPLE OF BREAK STATEMENT :
# include<stdio.h>
 /*   int main(){
	int i;
	for(i=1;i<=10;i++)     
	{
		if(i==5)
		break;
		printf("%d\n",i);
	}
	return 0;
}
*/ 
/*
int main(){
	int i ;
			for(i=1;i<=10;i++)     
	{
		if(i==3||i==6||i==7)
		continue ;
		printf("%d\n",i);
	}
	
	return 0;
}
*/

// WAP TO DISPLAY ODD NUMBER UP TO N USING CONTIONE SATEMENT .


/* int main(){
	int i,n;
	printf("ENTER THE VALUE OF N: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (i%2==1)
		continue ;
		printf("%d\t",i);
	}
		
	return 0;
	
}
*/


// PATTERN 
/* 

int main(){
	int i, j;
	

for(i=1;i<=5;i++)
	{
		for (j=5;j>=i;j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	 } 

return 0;

}
*/


/* 
int main(){
	int i, j,k ;
	

for(k=0;k<5;k++)
	{
		for (i=0;i<k;i++)
		{
			printf("\t");
		}
		for(j=1;j<=5-k;j++)
		{
			printf("%d\t",(i+j)%2);
		}
		printf("\n");
	 } 

return 0;
}
*/

/* 
int main(){
	int i,j;
	char str[]="UNIVERSITY";
	for(i=0;i<strlen(str);i++)
	{
		for (j=0;j<=i;j++)
		{
			printf("%c\t",str[j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
	
}
*/
// WAP TO read N element in an array and display it 
/* 
int main(){
	int i,n;
	printf("ENTER NO OF ELEMENT IN ARRAY : ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
	printf("ENTER THE ELEMENT arr[%d] : ",i);
	scanf("%d",&arr[i]);
	}
	printf("\n DISPLAYING ARAY ELEMENT\n");
	for (i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
*/

int main(){
		int i,n,sum=0;
	printf("ENTER NO OF ELEMENT IN ARRAY : ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
	printf("ENTER THE ELEMENT arr[%d] : ",i);
	scanf("%d",&arr[i]);
	sum+=arr[i];
	}

	printf("sum of all elements = %d",sum);
	return 0;
}

