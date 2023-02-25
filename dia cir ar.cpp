#include<stdio.h>
#define PI 3.1415
int main()
{
 int dia,radius;
  float cir,ar;
 printf("enter radius of curcle\n");
 scanf("%d",&radius);
 dia=2*radius;
 cir=2*PI*radius;
 ar=PI*radius*radius;
 printf("the diameter is %d units\n",dia);
 printf("the circumference is %.2f units\n",cir);
 printf("the area is %.2f units\n",ar);
 return 0;
}
