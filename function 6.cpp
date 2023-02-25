#include<stdio.h>
int minimum(int a,int b)
{
	int x;
	if(a<b)
	x=a;
	else
	x=b;
	return x;
	
}
int main()
{
	int a,b;
	int smaller=0;
	scanf("%d%d",&a,&b);
	smaller=minimum(a,b);
	printf("smaller is %d\n",smaller);
	return 0;
}
