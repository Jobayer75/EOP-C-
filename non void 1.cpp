#include<stdio.h>
int number(void)
{
	int f;
	f=1;
	return f;
}
int main()
{
	int fasting;
	fasting=number();
	printf("As a muslim you must fast for %d month during ramadan\n",fasting);
	return 0;
}
