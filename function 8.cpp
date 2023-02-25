#include<stdio.h>
int square(int z)
{
	int x;
	x=z*z;
	return x;
}

int main()

{
	int z,sq;
	scanf("%d",&z);
	sq=square(z);
	printf("square is %d= %d\n",z,sq);
	return 0;
}
