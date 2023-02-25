#include<stdio.h>
int main()
{
	float celcius,farenheit;
	printf("enter tempareture in farenheit:");
	scanf("%f",&farenheit);
	celcius=(farenheit-32)*5/9;
	printf("%.2f\ farenheit = %.2fn celcius",farenheit,celcius);
	return 0;
}
