//WAP to display middle number among 3 given numbers
 #include<stdio.h>
  void main()
  {
  	int a,b,c;
  	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
	printf("numbers are equal");
	else if(a<b&&a>c||a>b&&a<c)
	printf("%d is middle number",a);
	else if(b<a&&b>c||b>a&&b<c)
	printf("%d is middle number",b);
	else
	printf("%d is middle number",c);
  }
