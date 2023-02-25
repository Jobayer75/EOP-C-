#include<stdio.h>
int main()
{
  int num;
  do
  {
  	printf("input a number (1-4):");
  	scanf("%d",&num);
  	 if(num<1 || num>4)
  	  printf("out of range\n");
  	  
  }while(num<1 || num>4);
  
  switch(num)
  {
  	case 1:printf("AQIDAH");break;
  	case 2:printf("FIQAH");break;
  	case 3:printf("SIRAH");break;
  	case 4:printf("TAJWID");break;
  }
  return 0;
}
