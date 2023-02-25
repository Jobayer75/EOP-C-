#include<stdio.h>
int main()
{
	
	int p=10,q=2,r=4;
    printf("p is %d\n",++p);
    printf("q is %d\n",q);
    printf("r is %d\n",r++);
    r=r++-p;
    printf("the final value of r is %d\n",r);
    return 0;
}
