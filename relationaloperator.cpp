#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	
	a==b;
	printf("%d==%d is %d\n",a,b,a==b);
	a!=b;
	printf("%d!=%d is %d\n",a,b,a!=b);
	a>b;
	printf("%d>%d is %d\n",a,b,a>b);
	a<b;
	printf("%d<%d is %d\n",a,b,a<b);
	a>=b;
	printf("%d>=%d is %d\n",a,b,a>=b);
	a<=b;
	printf("%d<=%d is %d\n",a,b,a<=b);
	
	return 0;
	
}
