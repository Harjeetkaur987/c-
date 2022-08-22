#include<stdio.h>

double getAverage(int arry[],int size);

int main()
{
	int bal[5]={4,20,55,23,6};
	double avg;
	
	avg= getAverage(bal,5);
	
	printf("average is %f",avg);
	
	return 0;
}

double getAverage(int arry[],int size)
{
	int i;
	double a,sum=0;
	
	for(i=0;i<=size;i++)
	{
		sum=sum+arry[i];
	}
	a=sum/size;
	return a;
}
