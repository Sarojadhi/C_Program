//String library function example
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[15],str2[15];
	puts("Enter first string:");
	gets(str1);
	puts("Enter second string:");
	gets(str2);
    if(strcmp(str1,str2)>0)
        printf("%s is alphabetically greater than %s",str1,str2);
    else if(strcmp(str1,str2)<0)
        printf("%s is alphabetically smaller than %s",str1,str2);
    else
	    printf("Both are same");    
}
