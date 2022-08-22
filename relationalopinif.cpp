#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	
	if(a==b)
	printf("a is equal to b\n");
	
	if(a>=b)
	printf("a is greater than equal to b\n");
	
	if(a>b)
	printf("a is greater than b\n");
	
	if(a<=b)
	printf("a is less than equal to b\n");
	
	if(a<b)
	printf("a is less than b\n");
	
	if(a!=b)
	printf("a is not equal to b\n");
	
	return 0;
	
}
