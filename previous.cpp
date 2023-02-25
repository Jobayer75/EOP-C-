#include<stdio.h>
#include<ctype.h>
int main()
{
	char address[22]="Nilai campus";
	char age[20]="nineteen";
	int i;
    for(i=0;i<5;i++)
    {
    	printf("%c\t%c\n",address[i],age[8-i]);
	}
	return 0;
	}
