/*Write a C program to generate the following output using 
loop. 
1   0   1   0   1 
    0   1   0   1 
        1   0   1 
            0   1 
                1 */
#include<stdio.h>
void main(){
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("\t");
		}
		for(k=i;k<=5;k++)
		{
			printf("%d\t",k%2);
		}
		printf("\n");
	}
}
