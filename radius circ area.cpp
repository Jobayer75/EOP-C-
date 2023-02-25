#include<stdio.h>
int main ()
{

float radius,diameter,circumference,area;
printf("enter radius of circle:");
scanf("%f",&radius);
diameter=2*radius;
circumference=2*3.1415* radius;
area=3.1415*(radius*radius);
printf("diameter of circle =%.2f units\n",diameter );
printf("circumference of circle =%.2f units\n",circumference );
printf("area of circle =%.2f units\n",area );
return 0;
}

