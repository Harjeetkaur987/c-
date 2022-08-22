#include<stdio.h>

double getavrg(int *arry, int size);

int main()
{
	int balance[5]={100,70,45,50,80};
	double avg;
	
	avg=getavrg(balance,5);
	
	printf("The average is %f\n",avg);
	
	return 0;
}

double getavrg(int *arry,int size)
{
	int i,sum=0;
	double avg;
	
	for(i=0;i<size;i++)
	{
		sum=sum+arry[i];
	}
	avg=(double)sum/size;
	return avg;
}
