#include<stdio.h>
int main()
{
	int list[7]={6,5,7,3,2,9,10};
	int x,sum=0,average;
	for(x=0;x<=7;x++)
	{
		sum+=list[x];
	}
	average=sum/7;
	printf("The sum is :%d\n",sum);
	printf("The average is: %d\n",average);
	printf("value greater than average: \n");
	for(x=0;x<=7;x++)
	{
		if(list[x]>average)
		printf("Index[%d]:%d\n",x,list[x]);
	}
	return 0;
}
