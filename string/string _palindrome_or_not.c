//WAP to check whether given string is palindrome or not.
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[15],str2[15];
	printf("Enter a string: ");
	scanf("%s",str1);
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str1,str2)==0)
	    printf("%s is palindrome",str1);
	else
	    printf("%s is not palindrome",str1);
}
