// wap to count no of digit on any given number :
#include<stdio.h>
/* int main(){
	int n,num,count=0;
	printf("ENTER A NUMBER : ");
	scanf("%d",&n);
	num = n;
	while (n>0)
	{
		n=n/10;
		count++;
		
	
	}
	printf("NO OF DIGIT IN %d =%d ",num,count);
	return 0;
	
}
*/

// WAP TO THE SUM OF DIGITS OF ANY GIVEN NUMBER ;
 /* int main(){
 	int n,num,digit,sum=0;
 	printf("ENTER A NUMBER : ");
 	scanf("%d",&n);
 	num=n;
 	 while(n>0)
 	 {
 	digit=n%10;
 	sum+=digit;
 	n/=10;
 	
	  }
 	
 	printf("THE SUM OF DIGITS OF %d GIVEN NUMBER   is =%d",num,sum);
 	
 }
 */
 // WAP TO CHECK WHETHER GIVEN NUMBER IS ARMSTRONG OR NOT :
 
 # include<math.h>
 int main(){
 	int n,num,digit,sum=0,count=0;
 	printf("ENTER A NUMBER : ");
 	scanf("%d",&n);
 	num=n;
 	 while(n>0)
 	 {
 	digit=n/10;
 	
 	n/=10;
 	count++;
 }
 n=num;
 	 while(n>0)
 	 {
 	digit=n%10;
 	sum=sum+pow(digit,count);
 	n/=10;
 	count++;
 	
	  }
 	if (num==sum)
 	{
 		printf("%d is armstrong\n",num);
	 }
	 else
	 printf("%d is not armstrong\n",num);
 	
 	
 return 0;
 
 }
 