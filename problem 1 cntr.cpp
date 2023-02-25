#include<stdio.h>
int main()
{
	char gradepoint;
	int mark;
	printf("enter your mark:");
	scanf("%d",&mark);
	if(mark>=90&&mark<=100)
	printf("gradepoint=A+");
	else if(mark>=80&&mark<=89)
	printf("gradepoint=A");
	else if(mark>=70&&mark<=79)
	printf("gradepoint=A-");
	else if(mark>=60&&mark<=69)
	printf("gradepoint=B+");
	else if(mark>=0&&mark<=59)
	printf("gradepoint=B");
	else
	   printf("invalid\n");
	return 0;
}
