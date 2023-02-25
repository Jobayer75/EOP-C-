#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any two angles of triangle:");
	scanf("%d%d",&a,&b);
	c=180-(a+b);
	printf("third angle of the triangle=%d\n",c);
	return 0;
}
