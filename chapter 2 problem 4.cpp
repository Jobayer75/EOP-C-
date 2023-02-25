#include<stdio.h>
int main()
{
	float length,width,area,perimeter;
	printf("please enter length in meters:");
	scanf("%f",&length);
	printf("please enter width in meters:");
	scanf("%f",&width);
	area=length*width;
	perimeter=2*(length+width);
	printf("area is %.2f square meter\nperimeter is %.2f meter\n",area,perimeter);
	return 0;
}
