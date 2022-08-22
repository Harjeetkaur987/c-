#include<stdio.h>

void swap(int x, int y);

int main()
{
	int a=100;
	int b=300;
	
	printf("Before swap:the value of a is=%d\n",a);
	printf("Before swap:the value of b is=%d\n",b);
	
	swap(a,b);
	
	printf("After swap:the value of a is=%d\n",a);
	printf("After swap:the value of b is=%d\n",b);

    return 0;
}

void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	return;
}

