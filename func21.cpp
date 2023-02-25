#include <stdio.h>
float Average (float, float);

int main ( )
{
	float first, second, average_mark;

	printf("Input first mark: ");
	scanf("%f", &first);
printf("Input second mark: ");
	scanf("%f", &second);

	average_mark = Average(first, second);
	printf("Average mark is %.2f\n", average_mark);
	return 0;
}

float Average (float first_mark, float sec_mark)
{
	float avg;
	avg = (first_mark + sec_mark) / 2;
	return avg;
}

