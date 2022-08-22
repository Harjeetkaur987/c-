#include<stdio.h>

int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	printf("enter the value of a \n");
	scanf("%d",&a);
	printf("enter the value of b \n");
	scanf("%d",&b);
	
	c=a|b;
	printf("the output is %d\n",c);
	
	d=a^b;
	printf("the output is %d\n",d);
	
	e=~a;
	printf("the complement of a is %d\n",e);
	
	f=~b;
	printf("the complement of b is %d\n",f);
	
	g=a<<1;
	printf("the out put of a is %d\n",g);
	
    h=a>>1;
	printf("the out put of a is %d\n",h);
	
	i=b<<1;
	printf("the out put of b is %d\n",i);
	
    j=b>>1;
	printf("the out put of b is %d\n",j);
	
	return 0;
}
