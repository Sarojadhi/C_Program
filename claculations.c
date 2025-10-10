// WAP TO DISPLAY WHETHER GIVEN NUMBER IS EGATIVE OR POSITIVE .
/*#include<stdio.h>
void main(){
	int n;
	printf("ENTER A NUMBER");
	scanf("%d",&n);
	if(n>0){
		printf("%d is positive",n);
		else if(n==0)
		printf("%d is zero",n);
		else 
		printf(" %d number is negative",n);
		}
	}
}
*/
// WAP TO FIND THE ROOT OF QUADRATIC EQN.  
#include<stdio.h>
#include<math.h>

 /*
 void main(){
	int a, b, c;
	float d, x1, x2;
	printf("ENTER VALUE OF a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	d=sqrt(b*b-4*a*c);
	x1= (-b+d)/(2*a);
	x2= (-b-d)/(2*a);
	printf("x1 = %.2f and x2= %.2f",x1,x2);
	
}

*/ 
// WAP TO CALCULATE THE FOLOWING EXPRESSION : 5xsqrt(y*y+5)
 /* void main(){
	int x,y;
	float value;
	printf("enter the value of x and y :");
	scanf("%d%d", &x,&y);
	value =5*x*sqrt(y*y+5);
	printf("result = %.2f", value);
}
*/

// WAP TO FIND THAT IS EXACTLY DI=VISIBLE BY 5  BUT NOT BY 7 
 /* void main(){
	int n;
	printf("ENTER A NUMBER :");
	scanf("%d",&n);
	if (n%5==0&&n%7!=0)
	printf("%d is required number ",n);
	else 
	printf("%d is not required number ",n);
	
}
*/
// WAP TO DOSPLAY LARGEST AMONG ANY 3 GIVEN NUMBER USING NASTED IF ELSE 
/* void main(){
	
	int a ,b,c;
	printf("ENTER 3 NUMBER");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
{
	if(a>c)
	printf("%dis largest",a);
	 
	 else 
	 printf("%d is largest",c);
}
else {
	if(b>c)
	printf("%d is largest ",b);
	
else 
printf("% is largest ",c);
	}	
	

	
}
*/

// WAP TO DISPLAY LARGEST AMONG ANY GIVEN NUMBER USING ELSE IF LADDER 

/* void main(){
	int a,b,c;
	printf("ENTER 3 NUMBER :");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b&&b==c)
	
		printf("NUMBER ARE EQUAL");
		
		else if (a>b&&a>c)
		printf("%d is the largest",a);
		
		else if(b>a&&b>c)
		printf("%d is the largest",b);
		else 
		printf("%d is the largest ",c);
	
}

*/

// WAP TO DISPLAY middle number among any 3 numbers 
/*

void main(){
	
	int a, b, c;
	printf("entr 3 number");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
	printf("number are equal ");
	else if(a<b&&a>c ||a>b&&a<c)
	printf("%d is the middle number",a);
	
		else if(b<a&&b>c ||b>a&&b<c)
	printf("%d is the middle number",b);
	else
	printf("%d is middle number",c);

	
}
*/

// SWITCH 
// wap to display of week based on mumber entered by users
/*  void main()
{
	int day ;
	printf("ENTER A NUMBER");
	scanf("%d",&day);
	switch(day)
	{
		case 1 :
		printf("sunday");
		break;
		
		case 2:
		printf("monday");
		break;
			case 3:
		printf("tuesday");
		break;
			case 4:
		printf("wednesday");
		break;
			case 5:
		printf("thrusday");
		break;
			case 6:
		printf("friday");
		break;
			case 7:
		printf("satueday");
		break;
		
		default :
		printf("PLEASE INPUT 1-7 NUMBER ");
		
	}
	
}
*/


//wap to perform arthematic operation based on operator entered by user 



 void main()
{
	int a,b ;
	char op;
		printf("ENTER OPERATION");
	scanf("%c",&op);
	printf("ENTER TWO NUMBER");
	scanf("%d%d",&a,&b);

	switch(op)
	{
		case '+' :
		printf("sum =%d",a+b);
		break;
		
			case '-':
		printf("difference =%d",a-b);
		break;
			case '*' :
		printf("product =%d",a*b);
		break;
			case '/':
		printf("divisible =%d",a/b);
		break;
		

		
		default :
		printf("PLEASE see yhe mentioned info");
		
	}
	
}








