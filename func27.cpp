#include<stdio.h>
int  main ()
{
/*	int num[5];
	int value;
	num[0]=2;
	num[1]=7;
	num[2]=1;
	num[3]=5;
	num[4]=6;
	value = num[0] + num[2+2] - num[1+2] * num[2];
	printf("%d\n", value);
}*/

int array[3][3]={{0, 12, 44}, {56, 83, 90}};
printf("%d\n", array[1][1]);
printf("%d\n", array[0][2]+ array[1][0]);
printf("%d\n", array[1][2]- array[0][0]);
printf("%d\n", array[2][1]- array[1][2]);
printf("%d\n", array[2][2]- array[3][3]);
}
