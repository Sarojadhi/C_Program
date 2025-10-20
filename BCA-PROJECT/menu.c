/*
Write a menu driven program to perform the following task
1. To check the given number is odd or even.  
2. To display sum of first n natural number.  
3. To check given number is palindrome or not.  
4. Exit. 
*/
#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,choice,i,s,rev,rem,a;
	printf("ENTER YOUR CHOICE ....:\n");
	printf("1. To check odd or even\n");
	printf("2. To display sum of first n natural number\n ");
	printf("3. To check give number is palindrome or not\n");
	printf("4. Exit....\n");
	printf("Enter your choice :");
	scanf("%d",&choice);
	printf("Enter a number :");
	scanf("%d",&n);
	switch(choice){
		case 1:
			if(n%2!=0)
				printf("%d is odd number",n);
			else
				printf("%d is even number",n);
			break;
		case 2:
			s=0;
			for(i=1;i<=n;i++)
			{
				s=s+i;
			}
			printf("%d is the sum of n natural number",s);
			break;
		case 3:
			a=n;
			while(n!=0)
			{
			     rem=n%10;
			     rev=rev*10+rem;
			     n=n/10;
			}
			if(a==rev){
				printf("%d is palindrome number",a);
			}else{
				printf("%d is not palindrome number",a);
			}
			break;
		case 4:
			exit(0);
		    default:
			printf("please enter (0-4) ");
	}
	getch();
}
