#include<stdio.h>
int calculate(int no)
{
	int f;
	f=no-15;
	return f;
}
int main()
{
	int age,diff,donate;
	printf("enter your age:");
	scanf("%d",&age);
	diff=calculate(age);
	donate=4*12*diff;
	printf("your total donation is RM %d\n",donate);
	return 0;
}
