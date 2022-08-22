#include<stdio.h>
int main()
{
	float a=12.09,b=23.00,c=12.00,result;
	
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
