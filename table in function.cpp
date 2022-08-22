#include<stdio.h>

void table(int x);

int main()
{
	int a;
	printf("Enter the value:");
	scanf("%d",&a);
	
	table(a);
	
	return 0;
}

void table(int x)
{
	int i;
	for(i=1;i<=10;i++)
	printf("%dx%d=%d\n",x,i,x*i);
	return;
}
