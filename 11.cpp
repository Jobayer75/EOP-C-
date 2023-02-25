#include <iostream>
using namespace std;
void Line (int);	      

int main ( )
{
	 Line(10);	
	 Line(1);		
	 Line(5);		
      Line(8-2);	
	
      return 0;
}

void Line (int length)
{
	int i;
	for ( i = 0; i < length; i++)
	    cout<<"* ";
      cout<<endl;
}

