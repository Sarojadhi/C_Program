//Write a program to display whether given string is palindrome or not.
#include <stdio.h>
#include <string.h>
void main()
{
	char str1[30],str2[30];
	int i,j;
	printf("enter a string : ");
	gets(str1);
	for(i=strlen(str1)-1,j=0;i>=0;i--,j++)
	str2[j]=str1[i];
	str2[j]='\0';
	if(strcmp(str1,str2)==0)
	printf("Palindrome");
	else 
	printf("Not Palindrome");
}
