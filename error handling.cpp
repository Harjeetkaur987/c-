#include<stdio.h>
#include<errno.h>
#include<string.h>

extern int errno;

int main()
{
	FILE *pf;
	int errnum;
	pf=fopen("C:/Users/HP/Documents/harjeet.txt","r");
	
	if (pf==NULL)
	{
	errnum=errno;
	fprintf(stderr,"value of error:%d\n",errno);
	perror("Error printed by perror");
	fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
	}else {
   
      fclose (pf);
   }
   
   return 0;
}
