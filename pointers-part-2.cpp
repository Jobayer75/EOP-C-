#include <iostream>

using namespace std;



int main (){

int x =5;
int *p= &x;

int **q = &p;

int ***r = &q;

	cout << sizeof(double) << endl;
	cout << p << endl;
    cout << x << endl;
    
    ***r = 24 ;
    
    cout << x << endl;


	return 0;
}

