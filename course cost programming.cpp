#include<stdio.h>
int main()
{
	int no_person,meal_allowance=30;
	float total_cost,total_course_fee,course_fee=3500,total_meal_allowance;
	printf("enter type of course:programming\n");
	printf("enter number of person attending the course:");
	scanf("%d",&no_person);
	printf("enter course fee per person (RM):3500.00\n");
	total_course_fee=(no_person*course_fee);
	total_meal_allowance=(no_person*meal_allowance);
	total_cost=(total_course_fee+total_meal_allowance);
	printf("*******************************\n");
	printf("total course fee is RM %.2f\n",total_course_fee);
	printf("total meal allowance is RM %.2f\n",total_meal_allowance);
    printf("overall cost to send 2 person for programming course is %.2f\n",total_cost);
    return 0;
    
	
}
