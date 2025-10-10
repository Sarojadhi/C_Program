#include<stdio.h>
/*  void main()
{
	int l,b,a ;
	printf("ENTER LENGTH AND BREDTH OF rectangle");
	scanf("%d%d",&l,&b);
	a=l*b;
	printf("area of rectangle = %d",a);
	
} 

*/

//WAP TO DISPLAY OF CIRCLE 

/*void main(){
	int r;
	float A;
	printf("ENTER RADIOUS OF CIRCLE");
	scanf("%d",&r);
	A= 3.14*r*r;
	printf("Area of circle =%.lf",A);
}
*/
//WAP TO DISPLAY CIRCUMFANCE OF CIRCLE 
/*  void main(){
		int r; 
	float A,C;
	printf("ENTER RADIOUS OF CIRCLE");
	scanf("%d",&r);
	C=2*3.14*r ;
	printf("Area of circle =%.lf\n",A);
	printf("circumfarance of circle =%.lf",C);
	
}
*/

//WAP TO READ PRINCIPLE RATE AND TIME AND DISLAY SIMPLE INTREST 

/*void main(){
	int p ;
	float r,t,s ;
	printf("Enter principle,rate, time: ");
	scanf("%d%f%f",&p,&r,&t);
	s=p*t*r/100;
	printf("simple intrest =%lf ",s);
	
}
*/
// WAP TO SWAP THE VALUE OF TWO VARIABLE
/* void main(){
	int a = 5,b=10 ,c;
	printf("before swapping a=%d and b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	
	printf("after value a=%d and b= %d\n",a,&b);
}
*/
// WAP TO SWAP THE VALUE OF TWO VARIABLE with out third vaiable 
/* void main(){
	int a = 5,b=10 ;
	printf("before swapping a=%d and b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("after value a=%d and b= %d\n",a,b);
}

*/
//WAP to display given number is even or odd
/* void main(){
	int a ;
	printf("ENTER A NUMBER");
	scanf("%d",&a);
	if(a%2==0)
	printf("%d is even",a);
	else 
	printf("%d is odd",a);
}
*/

// WAP to display largest among two given number
void main(){
	int a ,b;
	printf("ENTER TWO NUMBERS");
	scanf("%d%d ",&a ,&b);
	if (a==b)
	printf("number is equal");
	else if(a>b)
	printf("%d is greater ",a);
	else 
	printf("%d is smaller ",b);
}




