//Write a program to find the largest and smallest number in a list of N numbers using DMA.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,small,large,*arr;
    printf("no. of elements in an array:");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
    {
    printf("Enter element arr[%d]:",i);
    scanf("%d",(arr+i));
    }
    small = *(arr + 0);
    large = *(arr + 0);
    for (i = 0; i < n; i++)
    {
    if (small > *(arr + i))
         small = *(arr + i);
    if (large < *(arr + i))
         large = *(arr + i);
    }
    printf("Smallest element = %d \n largest element = %d",small,large);
}
