#include<stdio.h>
#include<string.h>

/*
void main(){
	char str[]="BIRENDRA";
	printf("TOTAL LENGTH =%d",strlen(str));
}
*/
/*
void main(){
	char str1[]="BIRENDRA",str2[10];
	strncpy(str2,str1,3);
	printf("%s",str2);
}
*/

/*
void main(){
	char str1[]="Birendra";
	strlwr(str1);
	printf("%s",str1);
}
*/


/*
void main(){
	char str1[]="Birendra";
	strupr(str1);
	printf("%s",str1);
}
*/
// compare alphabets ..
/*
void main()
{
	char str1[15],str2[15];
	puts("ENTER FIRST STRING : ");
	gets(str1);
	puts("ENTER SECOND STRING : ");
	gets(str2);
	if(strcmp(str1,str2)>0)
	printf("%s is alphebatically greater than %s",str1,str2);
	else if(strcmp(str1,str2)<0)
	printf("%d IS ALPHEBATICALLY SMALLER THAN %s",str1,str2);
	else
	printf("both are same");
	
}
*/
// it merge :
/*
void main(){
	char str1[]="BIRENDRA ", str2[]="CAMPUS";
	strcat(str1,str2);
	printf("str1=%s\n",str1);
	printf("str2=%s\n",str2);
}'
*/

// WAP TO CHCK WHETHER GIVEN STRING IS PLANDROME OR  NOT
/*
void main(){
	char str1[15],str2[15];
	printf("ENTER A STRING : ");
	scanf("%s", str1);
	strcpy(str2,str1);
	// strrev(str2);
	if (strcmp(str1,str2)==0)
	printf("%s is palandrome ",str1);
	else
	printf("%s is not palandrome ",str2);
	
}
*/
/*
void main(){
	char str[100];
	int i,length=0;
	printf("ENTER A STRING : ");
	scanf("%s",str);
	while(str[length]!='\0')
	{
		length++;
	}
	printf("REVERSED STRING : ");
	for(i=length-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}
*/
/*

void main()
{
int i,j,n;
	printf("NO. OF STUDENT : ");
	scanf("%d",&n);
	char name [n][15],temp[15];
	for(i=0;i<n;i++)
	{
		printf("ENTER STUDENT NAME : ");
	 scanf("%s",name[i]);
	 
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
		
	}
	printf("\n student name in alphabet order\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",name[i]);
	}
	
}
*/
// WAP TO READ A LINE OF TEXT AND COUNT NO OF VOWELS, CONSONANTS, DIGIT AND SPACE .

void main(){
	int vowels=0,consonant=0,space=0,digit=0,i;
	char str[100];
	printf(" ENTER A STRING : ");
	gets(str);
	strlwr(str);
	for(i=0;str[i]!=NULL;i++ )
	{
		if(str[i]>='a'&& str[i]<='z')
		{
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			vowels++;
			else
consonant++;

		}
		if(str[i]>='0'&&str[i]<='9')
		digit++;
		if(str[i]==' ')
		space++;
	}
	printf("VOWELS=%d , CONSONANT = %d,DIGHTS=%d AND SPACE =%d",vowels,consonant,digit,space);
}





