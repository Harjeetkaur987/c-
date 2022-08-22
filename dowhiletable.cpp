#include<stdio.h>
int main()
{
	int i=1,number=0;
	printf("enter number:");
	scanf("%d",&number);
	do{
	printf("%d*%d=%d\n",number,i,number*i);
	i++;
	}while(i<=10);
	return 0;
}
