#include<stdio.h>
int main()
{
	float gradepoint;
	int mark;
	printf("enter your mark:");
	scanf("%d",&mark);
	if(mark>=90&&mark<=100)
	printf("gradepoint=4.0");
	else if(mark>=80&&mark<=89)
	printf("gradepoint=3.0");
	else if(mark>=70&&mark<=79)
	printf("gradepoint=2.0");
	else if(mark>=60&&mark<=69)
	printf("gradepoint=1.0");
	else if(mark>=0&&mark<=59)
	printf("gradepoint=0.0");
	else
	   ("invalid\n");
	return 0;
}
