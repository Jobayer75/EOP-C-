#include<stdio.h>
int main ()
{
  int a,b,c;
  float sum,avg;
  
  printf("enter number a:");
  scanf("%d",&a);
  printf("enter numbner b:");
  scanf("%d",&b);
  printf("enter numbner c:");
  scanf("%d",&c);
  sum=a+b+c;
  printf("the sum is %f\n",sum);
  avg=sum/3;
   printf("avg is %f\n",avg);
  return 0;
  
}
