#include<stdio.h>

int fun(int x,int y);

int main()
{
	int a=450;
	int b=340;
	int c;
	c=fun(a,b);
	printf("the max value is:%d\n",c);
	return 0;
}

int fun(int x, int y)   //return type function
{
	int reslt;
	if(x>y)
	reslt=x;
	else
	reslt=y;
	
	return reslt;
}
