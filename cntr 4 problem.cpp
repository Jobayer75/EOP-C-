//* F=FULL TIME, P= PART TIME, F1=LESS THAN 5YEARS, F2= 5EARS OR MOR, P1=THAN 5YEARS, P2=5EARS OR MOR*//
//QUESTION NUMBER4 PAGE NUMBER 93//
#define PERSENT1  0.04
#define PERSENT2  0.05
#define PERSENT3  0.025
#define PERSENT4  0.03
#include<stdio.h>
int main()
{
  char employee_status, F, F1, F2, P, P1, P2; 
  float current_salary, new_salary;
  
  printf("enter the employee curent salary:\n");
  scanf("%f", &current_salary);
  printf("enter the employee status:\n");
  scanf("%s", &employee_status); 
  
  
   if( employee_status==F)
  {
   if(employee_status==F1) 
   printf("the new salary is %.2f",new_salary = current_salary+(current_salary*PERSENT1));
   else  
   printf("the new salary is %.2f",new_salary = current_salary+(current_salary*PERSENT2));
   }
  
   else(employee_status==F);
   {
       
   if(employee_status==P1)    
   printf("the new salary is %.2f",new_salary = current_salary+(current_salary*PERSENT3));
   else
  printf("the new salary is %.2f",new_salary = current_salary+(current_salary*PERSENT4));
   }
   printf("the new salary is %.2f",new_salary );
    
    
    return 0;
}
