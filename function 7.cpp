#include<stdio.h>
int maximum(int a,int b)
{
	int x;
	if(a>b)
	x=a;
	else
	x=b;
	return x;
	
}
int main()
{
	int a,b;
	int bigger=0;
	scanf("%d%d",&a,&b);
	bigger=maximum(a,b);
	printf("bigger is %d\n",bigger);
	return 0;
}
