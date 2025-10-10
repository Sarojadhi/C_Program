/*Define a structure date having integer members to store day, month and year. Define another structure 
student having members as rollno, name and date_of_birth. Now write a program to accept and display 
information about ‘n’ students.*/
#include<stdio.h>
#include<conio.h>
void main()
{
struct date
{
int year;
int month;
int day;
};
struct student
{
int roll;
char name[15];
struct date dob;
};
struct student st[100];
int i,n;
clrscr();
printf("\n How many students are there: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter rollno,name and date of birth in (year-monthday): ");
scanf("%d%s%d%d%d",&st[i].roll,st[i].name,&st[i].dob.year,&st[i].
dob.month,&st[i].dob.day);
}
printf("\nRollno\tName\tDOB(Year-Month-Day)");
for(i=0;i<n;i++)
{"printf("\n%d\t%s\t%d-%d-%d",st[i].roll,st[i].name,st[i].dob.year,st[i].dob.month,st[i].dob.day);
}
getch();
}
