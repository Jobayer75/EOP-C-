#include<stdio.h>
int main ()
{
	float celcius,farenheit;
	printf("enter temperature in celcius:");
	scanf("%f",&celcius);
	farenheit=celcius*9/5+32;
	printf("%.2f celcius=%.2f farenheit",celcius,farenheit);
	return 0;
}
