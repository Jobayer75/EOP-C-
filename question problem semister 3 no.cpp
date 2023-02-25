#include<stdio.h>
int main()
{
	int n,a,b,c;
	int sum;
	printf("Input a number:");
	scanf("%d",&n);
	c = n%10;
	n = n/10;
	b = n%10;
	n = n/10;
	a = n%10;
	sum = (a*a) + (b*b) + (c*c);
	printf("the sum is %d\n",sum);
	
	switch (sum%2)
	{
		case 0:printf("EVEN");
		break;
		case 1:printf("ODD");
		break;
	}
	return 0;
}
