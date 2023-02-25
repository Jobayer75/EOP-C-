#include<stdio.h>
int main()
{
	int x=1,y=10;
	for(;x<=3 || y>=5;)
	{
		printf("%d\t%d\n",x,y);
		x++;    y--;
	}
	return 0;
}
