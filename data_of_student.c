/*WAP to read rollno, name and date of birth of n students and
display records of n students in appropriate format.use nested
structure for date of birth*/
#include<stdio.h>
void main()
{
struct DOB 
  {
    int year;
    int month;
    int day;
  };
struct student
  {
    int rollno;
    char name[25];
    struct DOB d;
  };
  int i,n;
  printf("No of students:");
  scanf("%d",&n);
  struct student st[n];
  for(i=0;i<n;i++)
  {
  	printf("Enter rollno,name and Date of Birth(Year,Month,Day):");
  	scanf("%d%s%d%d%d",&st[i].rollno,st[i].name,&st[i].d.year,&st[i].d.month,&st[i].d.day);
  }
  printf("\nRoll\tDOB(Year-Month-Day)\n");
  for(i=0;i<n;i++)
  {
  	printf("%d\t%s\t%d-%d-%d\n",st[i].rollno,st[i].name,st[i].d.year,st[i].d.month,st[i].d.day);
  }
}
 
