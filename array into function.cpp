#include <iostream>
#include <fstream> 
#include <cmath>
#include <cstdlib>
using namespace std ;
int total ( int add [],  int number );
int main () {
int jug [3]={1,0,3};
int summation = total (jug , 3);
cout <<"total is "<< summation << endl ; 
//system = "pause";
return 0 ;}

int total ( int add [],  int number )
{
	int sum =0;
	for (int i=0; i<number ; i++){
		sum = sum + add[i];
		
	}
	
	return sum ;
}
