#include<stdio.h>
int main()
{
	int r1,r2,c1,c2;
	printf("enter the no of rows in first matrix = ");
	scanf("%d",&r1);
	printf("enter the no of columns in the first matrix = ");
	scanf("%d",&c1);
	printf("enter the no of rows in second matrix = ");
	scanf("%d",&r2);
	printf("enter the no of columns in second matrix = ");
	scanf("%d",c2);
	if(c1!=r2)
	{
		printf("matrices cant be multiplied together");
	}
	else
	{
		int m1[r1][c1],m2[r2][c2];
		printf("enter the first matrix elements \n");
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			{
				scanf("%d",&m1[i][j]);
			}
		}
		printf("enter the second matrix elements \n");
		for(int i=0;i<r2;i++)
		{
			for(int j=0;j<c2;j++)
			{
				scanf("%d",&m1[i][j]);
			}
		}
		printf("multiplied matrix");
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				printf("%d\t",mul[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
