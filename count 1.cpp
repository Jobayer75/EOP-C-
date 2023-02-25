#include<stdio.h>
int main()
{
	int count,num;
	num=4;
	count=6;
	count+=2;
	count++;
	num=count;
	printf("num is %d and count is %d",num,++count);
	return 0;
}
