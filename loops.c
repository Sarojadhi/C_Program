//	WAP which givs a menu to driven program
/* #include<stdio.h>
#include<stdlib.h>
void main(){
	int a,b,choice;
	again :
		system("cls");
		printf("1.sum of two numbers: \n");
		printf("2.AREA OF RECTANGLE :\n");
		printf("3.AREA OF circle: \n");
		printf("4.DISPLAY NUMBER IS EVEN OR ODD \n");
		printf("5.EXIT\n\n");
		printf("ENTER YOUR CHOICE (1-5) : ");
		scanf("%d",&choice);
		switch(choice)
		{
			
			case 1: 
			printf("ENTER TWO NUMBER");
			scanf("%d%d",&a,&b);
			printf("sum=%d",a+b);
			break;
			
			case 2: 
			printf("ENTER TWO NUMBER");
			scanf("%d%d",&a,&b);
			printf("AREA OF RECTANGLE = &d ",a*b);
			break;
		
			case 3: 
			printf("ENTER radious of circle ");
			scanf("%d",&a);
			printf("area of circle =%.2f",3.14*a*a);
			break;
			
			case 4: 
			printf("ENTER a NUMBER");
			scanf("%d",&a);
			
			if(a%2==0)
			printf("%d is even",a);
			else 
			printf("%d is odd ",a);
			
			break;
			
				case 5: 
				exit(0);
				default :
				printf("wrong choice ");
				}

		getch ();
		goto again;
		
}
*/

// FOR LOOP 
// WAP TO DISPLAY 1 TO 100

/*#include<stdio.h>
void main (){
		int i;
		for (i=1; i<=100;i++)
		{
			printf("%d\t",i);
		 } 
	
}

*/

// WAP TO DISPLAY FIRST N NATURAL NUMBER
/*  #include<stdio.h>
void main(){
	int i,n; 
	printf("ENTER THE VALUE OF N : ");
	scanf("%d",&n);
	for (i=1 ; i<=n; i++)
	printf("%d\t",i);
	
}
*/

// WAP TO DISPLAY SUM OF FIRST NATURAL NUMBERS .
 #include<stdio.h>
 /*void main(){
	
	int i,n,sum=0;
	printf("ENTER THE VALUE OF N :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum =%d",sum);
}  

*/


// WAP TO DISPLAY FACTORIAL OF A GIVEN NUMBER .
 
/* void main(){
	int i,n,f=1;
		printf("ENTER THE VALUE OF N :");
			scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	printf("factorial of %d =%d",n,f);

}
*/
// WAP TO DISPLAY MULTIPLICATION TABLE OF ANY GIVEN NUMBER .
/* void main(){

}
*/

// WAP TO DISPLAY FIRST N EVEN NUMBERS .
/*void main(){
		
	int a=2 , i, n;
	printf("ENTER a NUMBER");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		a+=2;
	}
	
	
	
}

// WAP TO DISPLAY FIRST n ODD NUMBER 
/* void main(){
		
	int a=1,i,n;
	printf("ENTER a NUMBER");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		a+=2;
	}
}
*/
//	 WAP TO DISPLAY SUM OF FIRST ODD NUMBERS .
/* void main(){
	int a=1,i,n,sum=0;
	printf("ENTER A NUMBER");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=a;
		a+=2;
	}
	printf("sum of first %d odd number = %d ",n,sum);
}
*/

// WAP TO DISPLAY SUM OF SQUARE OF FIRST N NATURAL NUMBERS .

/* void main(){
	
	int i,n,sum=0;
	printf("ENTER THE VALUE OF N :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum+=i*i;
		
	}
	printf("sum =%d ", sum);
	
}
*/
//WAP TO DISPLAY 
void main(){
	
	int i,n,sum=0;
	printf("ENTER THE VALUE OF N :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum+=i*i;
		
	}
	printf("sum =%d ", sum);







