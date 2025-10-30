//WAP to write some text "welcome to BCA program" in a file test.txt
#include<stdio.h>
void main()
{
	FILE *fptr;
	char str[80];
	fptr=fopen("text.txt","w+");
	fputs("Welcome to BCA program",fptr);
	rewind(fptr);
	while(fgets(str,80,fptr)!=NULL)
	{
		puts(str);
	}
	fclose(fptr);
}
