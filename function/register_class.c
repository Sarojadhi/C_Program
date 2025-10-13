//Example of register storage class
#include<stdio.h>
void function();
void main()
{
	function();
	function();
	function();
}
void function()
{
	register int a=5;
	printf("a= %d\n",a);
	a=a+1;
}
