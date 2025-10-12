//String library function example
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Birendra",str2[10];
	strncpy(str2,str1);
    printf("%s",str2);
}
 