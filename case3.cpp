#include<stdio.h>
int main()
{
   int number;
   printf("enter the number between 1 and 10:");
   scanf("%d",&number);
   switch (number)
{
    case 1:
    case 3:
	case 5:
	case 7:
	case 9: printf("its an odd number\n");
	break;
	case 2:
	case 4:
	case 6:
	case 8:
	case 10: printf("its an even number\n");
	break;
	default:printf("out of range\n");
	  
}
   return 0;   
}
