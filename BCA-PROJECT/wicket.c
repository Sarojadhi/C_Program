/*WAP to store the player name, runs scored,wickets taken of n cricketers using structure along with pointer
then arrange the players in order of maximum wickets to minimum wickets they had taken*/
#include<stdio.h>
struct cricket
{
	int runs,wickets;
	char name[20];
};
void main()
{
	int i,j,n;
	printf("enter no of players: ");
	scanf("%d",&n);
	struct cricket c[n],*ptr[n],*temp;
	for(i=0;i<n;i++)
	{
		ptr[i]=&c[i];
	}
	for(i=0;i<n;i++)
	{
		printf("enter name,runs scored and wicket taken by player: ");
		scanf("%s%d%d",c[i].name,&c[i].runs,&c[i].wickets);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ptr[i]->wickets<ptr[j]->wickets)
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}	
	}
	printf("\nname\truns\twickets\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%d\t%d\n",ptr[i]->name,ptr[i]->runs,ptr[i]->wickets);
		}	
}
