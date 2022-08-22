#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	printf("enter the value of c\n");
	scanf("%d",&c);
	
	(a==b)==c;
	printf("(%d==%d)==%d is %d\n",a,b,(a==b)==c);
	(a!=b)!=c;
	printf("(%d!=%d)!=%d is %d\n",a,b,(a!=b)!=c);
	(a>b)>c;
	printf("(%d>%d)>%d is %d\n",a,b,(a>b)>c);
	(a<b)<c;
	printf("(%d<%d)<%d is %d\n",a,b,(a<b)<c);
	(a>=b)>=c;
	printf("(%d>=%d)>=%d is %d\n",a,b,(a>=b)>=c);
	(a<=b)<=c;
	printf("(%d<=%d)<=%d is %d\n",a,b,(a<=b)<=c);
	
	return 0;
	
	
}


