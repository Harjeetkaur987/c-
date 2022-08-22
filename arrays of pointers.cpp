#include<stdio.h>
const int MAX=3;
int main()
{
	int var[]={50,56,90};
	int i,*ptr[MAX];
	
	for(i=0;i<MAX;i++)
	{
		ptr[i]=&var[i];
		printf("value of var[%d]=%d\n",i,*ptr[i]);
	}
	
/*	for(i=0;i<MAX;i++)
	{
		printf("value of var[%d]=%d\n",i,*ptr[i]);
	}*/
	return 0;
}

