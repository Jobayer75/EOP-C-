#include <stdio.h>
void printmessage (int);

int main ()
{
  int x=3; 
  printmessage (x);

  return 0;
}

void printmessage (int i)
{
	for( ; i<7; i++)
		printf("I'm a function!\n");
}

