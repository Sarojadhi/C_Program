/*WAP to display following series
  1 5 9 13 17 .... 10terms*/
  #include<stdio.h>
  void main()
  {
  	int a=1,i;
  	printf("the required sereies is: \n");
  	for(i=1;i<=10;i++)
  	{
  		printf("%d ",a);
  		a=a+4;
	  }
  }