#include<stdio.h>
int main ()
{
  int num;
  float number;
  printf("input character: ?\n");
  printf("input integer:");
  scanf("%d",&num);
  printf("input floating point number:");
  scanf("%f",&number);
  printf("you have input ?  %d %.2f\n",num,number);
  return 0;
}
