#include<stdio.h>
int main()
{
	int a=12,b=13,c=65,result;
	
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

