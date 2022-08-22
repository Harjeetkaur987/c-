#include<stdio.h>

extern int a,b;
extern int c;
extern float f;

int main()
{
	int a,b;
	int c;
	float f;
	
	a=50;
	b=100;
	
	c=a+b;
	printf("the value of c=%d \n",c);
	
	f=90.0/3.0;
	printf("the value of f=%f \n",f);
	
	return 0;
	
	
}

