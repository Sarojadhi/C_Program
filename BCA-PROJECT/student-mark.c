/*WAP using structure that reads the records of students with members roll, name,address
and marks and display the record of students who have obtained greater than 250 marks*/
#include<stdio.h>
void main()
struct student
{
	int roll,tm;
	char name[20];
	char add[25];
};
{
	int n,i;
	printf("no of students: ");
	scanf("%d",&n);
	struct student st[n];
	for(i=0;i<n;i++)
	{
		printf("enter rollno,name address and total marks: ");
		scanf("%d%s%s%d",&st[i].roll,st[i].name,st[i].add,&st[i].tm);
	}
    printf("\nroll\tname\taddress\ttotal marks\n");
	for(i=0;i<n;i++)
	{
		if(st[i].tm>250)
		printf("%d\t%s\t%s\t%d\n",st[i].roll,st[i].name,st[i].add,st[i].tm);
	}
}
