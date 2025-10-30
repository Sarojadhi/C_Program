/*Write a program to store stdno, name and mark of 'n'
students in a data file. Display the records in appropriate 
format reading from the file. */
#include<stdio.h>
void main()
{
	struct students{
		int stno;
		char name[30];
		int marks;
	};
	struct students st;
	FILE *fptr;
	int i,n;
	fptr=fopen("student.txt","wb+");
	printf("Enter no of students :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter idno Name Marks of %d students :",i+1);
		scanf("%d%s%d",&st.stno,st.name,&st.marks);
		fwrite(&st,sizeof(st),1,fptr);
	}
	printf("\nIdno\t Name\t Marks\n");
	rewind(fptr);
	while(fread(&st,sizeof(st),1,fptr)==1){
		printf("%d\t%s\t%d\n",st.stno,st.name,st.marks);
	}
	fclose(fptr);
}
