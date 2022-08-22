#include<stdio.h>

int fun1(int x,int y);

int main()
{
	int a,b,c;
	/*printf("enter the value of a:\n");
	scanf("%d",&a);
	printf("enter the value of b:\n");
	scanf("%d",&b);*/
	
	c=fun1(5,9);
	
	printf("the addtion of a and b is %d\n",c);
	
	return 0;
}

int fun1(int x, int y)
{
	int z;
	z=x+y;
	return z;
}
