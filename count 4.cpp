#include<stdio.h>
int main()
{
	
	int count,num;
	num=3;
	count=5;
	++count;
	num=count;
	count/=2;
	++num;
	printf("num is %d and count is %d",num,++count);
	return 0;
}
