#include<stdio.h>
void main()
{
	int n;
	printf("enter the no of elements in the array = ");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d elements in the array :\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("even number in the array are :\n");
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d",arr[i]);
		}
	printf("odd number in the array are :\n");
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d",arr[i]);
		}
	}

