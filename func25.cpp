#include<stdio.h>
int subtraction (int, int);

int main ()
{
  int x=5, y=3, z;
  z = subtraction (7,2);
  printf("The first result is %d\n",z);
  printf("The second result is %d\n",subtraction (7,2));
  printf("The third result is %d\n", subtraction (x,y));
  z= 4 + subtraction (x,y);
  printf("The fourth result is %d\n", z);
  return 0;
}
int subtraction (int a, int b)
{
  int r;
  r=a-b;
  return (r);
}

