#include <stdio.h> 
int MultTwo(int,int);
int MultFour(int,int,int,int); 

int main() 
{ 
	int a=1,b=2,c,d=5,e; 
	c=MultTwo(a,b); 
	e=MultFour(a,b,c,d);
	printf("%d\n", e);

	return 0; 
} 

int MultTwo(int x, int y) 
{ 
	return (x*y); 
} 

int MultFour(int m, int n, int o, int p) 
{ 
	return (m*n*o*p); 
}


