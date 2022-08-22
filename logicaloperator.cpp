#include<stdio.h>
int main()
{
	int a,b,c,result;
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	printf("enter the value of c\n");
	scanf("%d",&c);
	
	result=(a==b)&&(c>b);
	printf("(a==b)&&(c>b) is %d\n",result);
	
	result=(a==b)&&(c<b);
	printf("(a==b)&&(c<b) is %d\n",result);
	
	result=(a==b)||(c>b);
	printf("(a==b)||(c>b) is %d\n",result);
	
	result=(a==b)||(c<b);
	printf("(a==b)||(c<b) is %d\n",result);
	
	result=!(a==b)&&(c>b);
	printf("!(a==b)&&(c>b) is %d\n",result);
	
	result=!(a==b)||(c>b);
	printf("!(a==b)||(c>b) is %d\n",result);
	
	result=!(a==b)&&(c>b);
	printf("!(a==b)&&(c>b) is %d\n",result);
	
	result = !(a != b);
    printf("!(a != b) is %d \n", result);
    
    return 0;
	
	
}
