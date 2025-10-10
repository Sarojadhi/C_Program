/*WAP to read rollno, age and name of n students and display
records of students in alphabetically order on the basis of age*/
#include<stdio.h>
#include<string.h>
void main()
{
	struct student
	{
		int rollno;
		int age;
		char name[25];
	};
	int n,i,j;
	printf("No of students:");
	scanf("%d",&n);
	struct student st[n],temp;
	for(i=0;i<n;i++)
	{
		printf("Enter rollno, age and name of student%d:",i+1);
		scanf("%d%d%s",&st[i].rollno,&st[i].age,st[i].name);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmpi(st[i].name,st[j].name)>0)
			{
				temp=st[i];
				st[i]=st[j];
				st[j]=temp;
			}
		}
	}
	printf("\nRollno\tAge\tName\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\t%s\n",st[i].rollno,st[i].age,st[i].name);
	}
}
