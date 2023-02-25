#include<stdio.h>
int main ()
{
	float length,width,area;
	printf("enter length in meters:");
	scanf("%f",&length);
	printf("enter width in meters:");
	scanf("%f",&width);
	area=length*width;
	printf("the area is %.2f square meters\n",area);
	return 0;
}
