//Write a program to read line of text from user and count number of vowels, consonants, spaces and digits.  
#include<stdio.h>
#include<string.h>
void main()
{
	char text[300];
	int v=0,c=0,s=0,d=0,len,i;
	printf("Enter text :");
	gets(text);
	len=strlen(text);
	for(i=0;i<len;i++)
	{
		if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u')
			v++;
		else if(text[i]>='0' && text[i]<='9' )
			d++;
		else if(text[i]==' ')
			s++;
		else
			c++;
	}
	printf("Text has :\n %d no of vowels \n %d no of consonants\n %d no of spaces\n %d no of digits",v,c,s,d);
}
