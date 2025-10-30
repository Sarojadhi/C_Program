// Write a C program to copy contents of student.txt file into another file called info.txt.
#include<stdio.h>
void main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1=fopen("student.txt","w+");
    fp2=fopen("info.txt","w");
    printf("Enter the text(press ctrl+z to stop reading characters) \n = ");
    while((ch=getchar())!=EOF)
    {
    fputc(ch,fp1);
    }
    rewind(fp1);
    while((ch=getc(fp1))!=EOF)
    {
    putc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);  
	printf("\nFile copied successfully from student.txt to info.txt\n");
}
