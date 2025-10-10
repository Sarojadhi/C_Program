/*WAP to read rollno, age and name of n students and display
records of students having age between 18 and 25*/
#include<stdio.h>
void main()
{
	struct student
	{
		int rollno;
		int age;
		char name[25];
	};
	int n,i;
	printf("No of students:");
	scanf("%d",&n);
	struct student st[n];
	for(i=0;i<n;i++)
	{
		printf("Enter rollno, age and name of student%d:",i+1);
		scanf("%d%d%s",&st[i].rollno,&st[i].age,st[i].name);
	}
	printf("\nRollno\tAge\tName\n");
	for(i=0;i<n;i++)
	{
		if(st[i].age>=18&&st[i].age<=25)
		printf("%d\t%d\t%s\n",st[i].rollno,st[i].age,st[i].name);
	}
}

