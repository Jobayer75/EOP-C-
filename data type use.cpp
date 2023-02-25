#include<stdio.h>
int main()
{
	int p=4567;
	float q=1.23;
	printf("%3d %6d\n",p,p);
	printf("%3f %13f\n",q,q);
    printf("%.6f %13.3f\n",q,q);
    return 0;
}
