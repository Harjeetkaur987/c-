#include<stdio.h>
#include<string.h>

struct mystructure
{
	int myNum;
	char myLetter;
};

int main()
{
	struct mystructure s1;
	struct mystructure s2;
	
	s1.myNum=13;
	s1.myLetter='H';
	
	s2.myNum=45;
	s2.myLetter='M';
	
	printf("My number:%d\n",s1.myNum);
	printf("My letter:%c\n",s1.myLetter);
	
	printf("My number:%d\n",s2.myNum);
	printf("My letter:%c\n",s2.myLetter);
	
	return 0;
	
}
