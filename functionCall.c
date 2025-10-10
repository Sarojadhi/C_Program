// WAP TO DISPLAY FUNCTON CALL .
#include<stdio.h>
/*
void hello (){
	printf("hello Bca student");
	
}
	int main (){
	hello();
	return 0;
}
*/
/*
int sum (int,int);
void main(){
	int a,b,s;
	printf("ENTER TWO NUMBERS : ");
	scanf("%d%d",&a,&b);
	s=sum(a,b);
	printf("sum= %d",s);
	
}
int sum(int x,int y)
{
	int c;
	c=x+y;
	return c;
}
*/

/*
int sum(int,int);
void main()
{
	int a,b;
	printf("ENTER TWO NUMBER : ");
	scanf("%d%d",&a,&b);
	printf("sum = %d",sum(a,b));
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return(z);
}

*/
/*
// FUNCTION WITH ARGUMENT BUT NO RETURN TYPE
void sum(int,int);
void main()
{
	int a,b;
	printf("ENTER TWO NUMBER : ");
	scanf("%d%d",&a,&b);
	sum(a,b);
}
void sum(int x,int y)
{
	int z;
	z=x+y;
	printf("sum=%d",z);
}

*/
// FUNCTION WITH NO ARGUMENT BUT RETURN TYPE
/*
int sum();
void main()
{
	
	printf("sum=%d",sum());
}
int sum()
 {

int x,y,z;
printf("ENTER TWO NUMBER : ");
scanf("%d%d",&x,&y);
z=x+y;
return z;
}
*/

// WAP TO DISPALY AREA OF RECTANGLE BY USING function.
/*
void area(int,int);
void main()
{
	int l,b;
	printf("ENTER LENGTH AND BREDTH OF RECTANGLE : ");
	scanf("%d%d",&l,&b);
	area(l,b);
	
}
void area (int x, int y)
{
	int a;
	a=x*y;
	printf("area of rectangle =%d",a);
}
*/

// WAP TO DISPLAY AREA AND CIRCUMFERENCE OF CIRCLE BY USING FUNCTION .
/*
void area(int);
void  circumference (int);
void main()
{
	int r;
	printf("ENTER radious of circle : ");
	scanf("%d",&r);
	area(r);
	circumference(r);

}
void area (int r)
{

	printf("area of circumference =%.2f\n",3.14*r*r);
}
void circumference (int r)
{
	printf("circumference of circle is = %.2f",2*3.14*r);
}
*/

// WAP TO DISPLAY WETHER GIVEN NUMBER IS EVEN NUMBER IS EVEN OR ODD BY USING FUNCTION .
/*
void evenodd(int);
void main()
{
	int num;
	printf("ENTER A NUMBER : ");
	scanf("%d",&num);
	evenodd(num);
	
}
void evenodd(int n)
{
	if(n%2==0)
	printf("%d is even",n);
	else
	printf("%d is odd",n);
}
*/
// WAP TO DISPLAY MULTIPLICATION TABLE OF A NUMBER BY USING FUNCTION .
/*
void multiplication(int);
void main(){
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	multiplication(num);
	
	
}
void multiplication (int n)
{

	int i;
	for(i=1;i<=10;i++)
{
	printf("%d x %d = %d\n",n,i,n*i);
}
}
*/

// WAP TO  DISPLAY WETHER GIVEN NUMBER IS PRIME OR COMPOSITE BY USING FUNCTION .
/*
void primecomp(int);
void main(){
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	primecomp(num);


}
void primecomp (int n)
{

	int i,factor=0;
	for(i=1;i<=n;i++)
{
	if(n%i==0)
	factor++;

}
if (factor==2)
printf("%d is prime number",n);
else
printf("%d is composite number",n);
}
*/

// WAP TO DISPLAY N PRIME NUMBER USING FUNCTION .
/*
void prime(int);
void main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	prime(num);


}
void prime (int n)
{

	int i,n,factor=0,count=0;
	for(n=1;count!=n;n++)

{
	for(i=1;i<=n;i++)
	{

	if(n%i==0)
	factor++;

}
if (factor==2)
{

printf("%d is prime number",n);
count++;

}

factor=0;
}
}
*/

// wap tocount no. of digits in any given numbers using function .

void no_of_digit(int);
void main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	no_of_digit(num);


}
void no_of_digit (int n)
{

	int count=0;
	while(n>0)
	{
		n/=10;
		count++;
		
	}
	printf("no of digits =%d",count);

}








