#include<stdio.h>
int main ()
{
	char ans;
    do
    {
    	printf("do you want to continue (Y-yes/N-no)?");
    	scanf("%c",&ans);
	} while(ans=='Y');
	return 0;
}
