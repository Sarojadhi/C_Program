/*wap to enter bid, title, price, pages of n book into structure variable called book and sort them in descending
order on the basis of their title with use of pointer*/
#include<stdio.h>
#include<string.h>
struct books
{
	int bid,price,pages;
	char title[20];
};
void main()
{
	int i,j,n;
	printf("no of books: ");
	scanf("%d",&n);
	struct books book[n],*ptr[n],*temp;
	for(i=0;i<n;i++)
	{
		ptr[i]=&book[i];
	}
	for(i=0;i<n;i++)
	{
		printf("enter bid,title,price and pages of books: ");
		scanf("%d%s%d%d",&book[i].bid,book[i].title,&book[i].price,&book[i].pages);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(ptr[i]->title,ptr[j]->title)<0)
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	printf("\nbid\ttitle\tprice\tpages\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\t%d",ptr[i]->bid,ptr[i]->title,ptr[i]->price,ptr[i]->pages);
	}
}
