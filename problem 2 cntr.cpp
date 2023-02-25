#include<stdio.h>
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d num is an even",num);
	}
	else
    {
	    printf("%d num is an odd",num);

    }

    return 0;
}
