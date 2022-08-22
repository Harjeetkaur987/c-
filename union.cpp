#include<stdio.h>
#include<string.h>

union Data
{
	int i;
	float f;
	char str[50];
}; 
int main()
{
	union Data d;
	d.i=10;
	d.f=45.0;
	strcpy(d.str,"Harjeet kaur");
	printf("Memory size occupied by data %d\n",sizeof(d));
	printf("d.i=%d d.f=%f d.str=%s",d.i,d.f,d.str);
	return 0;
	
}
