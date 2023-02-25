#include<stdio.h>
double cube (double num);
int main()
{
	int num;
	int sum;
	printf("enter any number");
	scanf("%d",&num);
	sum=cube(num);
	printf("cube of %d is %.2d",num,sum);
	return 0;
}

double cube(double num)

{
	int sum;
	sum =num*num*num;
	return (sum);
}
