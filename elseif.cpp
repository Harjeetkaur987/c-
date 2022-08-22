#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	
	printf("Enter the value of c\n");
	scanf("%d",&c);
	printf("Enter the value of d\n");
	scanf("%d",&d);
	
	
	if (a>b)
	printf("a is greater than b\n");
	else if (a<b)
	printf("a is less than b\n");
	else
	printf("a is equal to b\n");
		
	if(c==d)
	printf("c is equals to d\n");
	else if(c!=d)
	printf("c is not equals to d\n");
	else
	printf("c and d are not equal\n");
	
	return 0;
		
	
}
