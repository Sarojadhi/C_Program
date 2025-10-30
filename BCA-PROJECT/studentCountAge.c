//Write a program to enter age of n students and count no. of students having age between 18 and 25 using DMA
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,count=0,*arr;
    printf("no. of students:");
    scanf("%d",&n);
    arr=(int *)malloc(n* sizeof(int));
    for(i=0;i<n;i++)
    {
    printf("Enter age of student %d :",i+1);
    scanf("%d",(arr+i));
    if(*(arr+i)>=18 && *(arr+i)<=25)
    count++;
    }
    printf("No of students between age 18-25 = %d",count);
}
