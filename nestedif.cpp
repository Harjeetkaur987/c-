#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	
	if(a>=b)
	{
		if(a>b)
		{
			printf("a is greater than b\n");
		}
		else
		{
			printf("a is equal to b\n");
		}
	}
	else
	printf("b is greater than a\n");
	
	return 0;
}
	
