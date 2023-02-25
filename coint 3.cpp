#include<stdio.h>
int main()
{
	int count,num;
	num=1;
	count=3;
	++count;
	num=count;
	count*=2;
	count++;
	printf("num is %d and count is %d",num,count--);
	return 0;
}
