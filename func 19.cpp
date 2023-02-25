#include <stdio.h>
          int confusion(int x, int y) ;
		
          int main( ) 
		   {
                  int x = 2, y = 5;
                  y = confusion(y, x);
                  x = confusion(y, x);
                  printf("%d %d\n", x, y);
           }
		int confusion(int x, int y) 
		{
                 x = 2*x + y;
                 return x;
           }


