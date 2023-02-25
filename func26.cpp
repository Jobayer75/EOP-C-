#include <stdio.h>
void module2(int, int, int); 

int main()
{
   int a=3, b=4, c=5, x=7, y=8, z=10;

   module2 (a, b, c); 		 
   printf("First in main : %d %d %d %d %d %d\n",   
           a,b,c,x,y,z);

   module2 (x, y, z);		
   printf("Second in main : %d %d %d %d %d %d\n", 
           a,b,c,x,y,z);
	
   return 0;
}

void module2 (int a, int b, int c)
{
	a += 4;
	b += 4;
	c += 4;
	printf("In module2: %d %d %d\n",a,b,c);
}

