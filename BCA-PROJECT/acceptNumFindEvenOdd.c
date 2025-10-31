/*Write a C program to accept n numbers from user and store 
them in odd.txt file (if number is odd) or even.txt file (if 
number is even) then display odd numbers reading from 
odd.dat file.  */
#include<stdio.h>
void main(){
	FILE *fptr1,*fptr2;
	fptr1=fopen("odd.txt","wb+");
	fptr2=fopen("even.txt","wb+");
		int i,n;
	printf("Enter how many number :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter %d number :",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			fwrite(&arr[i],sizeof(int),1,fptr2);
		}
		if(arr[i]%2!=0){
			fwrite(&arr[i],sizeof(int),1,fptr1);
		}
	}
	rewind(fptr1);
	printf("\nOdd number\n");
	//int num;
	
	//while(fread(&num,sizeof(int),1,fptr1)==1){
	while(fread(&arr[i],sizeof(int),1,fptr1)==1){
		printf("%d\t",arr[i]);
	}
	fclose(fptr1);
	fclose(fptr2);
}
