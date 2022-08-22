#include<stdio.h>
int main()
{
	int m[3][3];
	int i,j;
	
	printf("Enter the values in matrix:");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%d\n",&m[i][j]);
		}
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("m[%d][%d]=%d\n",i,j,m[i][j]);
		}
	}
	return 0;
}
