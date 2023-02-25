#include <iostream>

using namespace std;

void Nothing(double,double,double&, double&);

int main (){
 	double x, y, z, l;
    cin >> x >> y;
    Nothing (x,y,z,l);
 
 
    
	cout << z << l << endl;
	return 0;
}
void Nothing(double x,double y,double& z, double& l){
	z = x + y;
	l = x*y;
	return;
}

