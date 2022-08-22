#include<stdio.h>
int main()
{
	int i=1,j=1,n=0,m=0;
	printf("enter the value of n:");
	scanf("%d/n",&n);
	printf("enter the value of m:");
	scanf("%d/n",&m);
	
	
	while(i<=n)
	{
		while(j<=m)
		{
		printf("the number is:%d\n",j);
		j++;	
		}
	printf("the number is:%d\n",i);
     i++;
	}
}
