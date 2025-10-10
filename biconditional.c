#include<stdio.h>
int biconditional(int x,int y)
{
	if ((x==0)&&(y==0)||(x==1)&&(y==1))
	return 1;
	else
	return 0;
}
int main()
{
	int A,B;
	printf("biconditional A <-> B\n");
	for(A=0;A<=1;A++)
	{ for(B=0;B<=1;B++){
		printf("%d<->%d\n",A,B,biconditional(A,B));
	}
	}
	return 0;
}
