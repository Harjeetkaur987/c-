#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter the value of a \n");
	scanf("%d",&a);
	printf("enter the value of b \n");
	scanf("%d",&b);
	
	c=a+b;
	printf("the addition if a and b is %d\n",c);
	
	a+=b;
	printf(" the value is %d\n",a);
	
	a-=b;
	printf(" the value is %d\n",a);
	
	a*=b;
	printf(" the value is %d\n",a);
	
	a/=b;
	printf(" the value is %d\n",a);
	
	a%=b;
	printf(" the value is %d\n",a);
	
	a<<=2;
	printf(" the value is %d\n",a);
	
	a>>=2;
	printf(" the value is %d\n",a);
	
	a&=b;
	printf(" the value is %d\n",a);
	
	a^=b;
	printf(" the value is %d\n",a);
	
	a|=b;
	printf(" the value is %d\n",a);
	
	return 0;
	
		
}
