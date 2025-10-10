#include<stdio.h>
void function(char[]);
void main(){
	char name[50];
	printf("enter our name :");
	gets (name);
	function(name);
	
}
void function (char str [])
{
	printf("name is %s",str);
}
