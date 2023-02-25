#include <iostream>

#define PI 3.1416

using namespace std;

double spherevol();


int main (){
	
	
	cout << spherevol( ) << endl;
	return 0;
}

double spherevol(){
	
	double r;
	
	cout << "Please type the Radius of the Sphere : " << endl;
	cin >> r ;
	
	double volume;
	
	volume = (4*PI*r*r*r)/3;
	
	return volume;
	
}
