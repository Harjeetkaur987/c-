#include<stdio.h>
int main()
{
	int i=1,number=0;
	printf("enter the number:");
	scanf("%d",&number);
	while(i<=10)
	{
		printf("%d*%d=%d\n",number,i,i*number);
		i++;
	}
	return 0;
}
