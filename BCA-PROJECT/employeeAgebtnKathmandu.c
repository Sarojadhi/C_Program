/*Create a structure �Employee� having Name, Department, 
Address, Salary and Age as member functions. Display the 
name of the employee having aged between 30 and 50 are 
living in Kathmandu. */
#include<stdio.h>
#include<string.h>
struct Employee{
		char name[30];
		char department[30];
	    char address[30];
	    int salary;
	    int age;
	};
void employee(struct Employee st[],int);
void main(){
	int n,i;
	printf("Enter no of employee :");
	scanf("%d",&n);
	
	struct Employee st[n];
	for(i=0;i<n;i++){
		printf("Enter Name Department Address Salary Age :");
		scanf("%s%s%s%d%d",st[i].name,st[i].department,st[i].address,&st[i].salary,&st[i].age);
		
	}
	employee(st,n);
	
}
void employee(struct Employee st[],int n){
	int i;
	printf("Name\tDepartment\tAddress\tSalary\tAge\n");
	for(i=0;i<n;i++){
		if(st[i].age>=30 && st[i].age<=50){
			if(strcmpi(st[i].address,"kathmandu")==0){
				printf("%-10s%-10s%-10s%-10d%-10d\n",st[i].name,st[i].department,st[i].address,st[i].salary,st[i].age);
			}
		}
	}
}
