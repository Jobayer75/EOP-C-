#include<stdio.h>
#include<math.h>
int main()
{
	double base,expo,power;
	printf("enter base:");
	scanf("%lf",&base);
	printf("enter expo:");
	scanf("%lf",&expo);
	power=pow (base,expo);
	printf("%.2lf ^ %.2lf=%.2lf\n",base,expo,power);
	return 0;
}
