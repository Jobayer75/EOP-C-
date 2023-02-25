#include<stdio.h>
int main ()
{
	char grade;
	int point;
	printf("enter grade:");
	scanf("%c",&grade);
	switch(grade)
{    case 'A' :printf("point=4");break;
     case 'B' :printf("point=10");break;
     case 'C' :printf("point=2\n");
     case 'D' :printf("point++");break;

}
  return 0;  
}
