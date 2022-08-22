#include<stdio.h>

int main()
{
	int a;
	printf("enter the value of a\n");
	scanf("%d",&a);
	
	if(a>0)
	printf("a is positive value\n");
	else if(a<0)
	printf("a is negative value\n");
	else
	printf("a is equal to zero\n");
	
	return 0;
}
