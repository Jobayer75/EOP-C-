#include<stdio.h>
int main()
{
	int number=4;
  switch (number)

{   case 2:  number=number+10; break;
  	case 4:  number=number+5; break;
  	case 6:  number=number+7; break;
  	default: number=0;
}
  return 0;
}
