#include<stdio.h>
float price()
{
	float n;
     n=10+20;
     return n;
}
float Fahrenheit ()
{
	float y,Celsius;
	y=(1.8*Celsius)+32;
	return y;
}

int main()
{
	float x,y,z,d,price,fahrenheit;
	printf("eneter x:");
	scanf("%f",&x);
	z=price();
	y=Fahrenheit();
	printf("%f",z);
	printf("%f",y);
	return 0;
	
}
