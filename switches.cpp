#include<stdio.h>
int main()
{
	char grade='B';
	
	switch(grade)
	{
		case 'A':
			printf("excellent\n");
			break ;
		case 'B':
			printf("very good\n");
			break ;
		case 'C':
			printf("good\n");
			break ;
		case 'D':
			printf("you are passed\n");
			break ;
		case 'F':
			printf("better try again\n");
			break ;
		default :
			printf("invalid grade\n");
	}
	printf("your grade is %c",grade);
	return 0;
	
}
