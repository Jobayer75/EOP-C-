#include <stdio.h>
int addition (int, int);

int main ()
{
  int z;
  z = addition (5,3);
  printf("The result is %d\n", z);
  return 0;
}

int addition (int a, int b)
{
  int r;
  r=a+b;
  return (r);
}

