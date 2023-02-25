#include<stdio.h>
int main()
{
	int i,j;
	int numlist[5]={2,3,4,5,6};
	for(i=0;i<5;i=i+1)
	{
		numlist[i]=i*numlist[i];
			printf("%d\t",numlist[i]);
	}
	return 0;
}

