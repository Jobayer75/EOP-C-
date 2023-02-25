#include <iostream>

using namespace std;


void PassByAddress(int*, int*); // Dude u r genius

int main(){
	int x= 10;
	int y = 21;
	
	cout << x << " "<< y << endl;
    PassByAddress(&x, &y);
    cout << x << " " << y << endl; 
}
void PassByAddress(int *m, int *l){
	int temp = *m;
	*m = *l;
	*l = temp;
}


