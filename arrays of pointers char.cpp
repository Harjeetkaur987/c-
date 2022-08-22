#include<stdio.h>
const int MAX=4;

int main()
{
	char * name[]={ 
	          "Zara Ali",
			  "Hina Ali",
			  "Nehu Ali",
			  "Sara ali"
			  };
	int i=0;
	
	for(i=0;i<MAX;i++)
	{
		printf("Value of name[%d]=%s\n",i,name[i]);
	}
	return 0;
			  
}
