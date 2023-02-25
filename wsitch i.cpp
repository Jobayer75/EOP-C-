#include<stdio.h>
int main ()
{
	int i=2,j=10;
	switch(i)
{    case 1:printf("%d\n",j++);break;
     case 2:printf("%d\n",++j);
     case 3:printf("%d\n",--j);break;
     case 4:printf("%d\n",j--);
     default:printf("error\n");
}
  return 0;  
}
