#include <iostream>

using namespace std;

struct Student{
	int roll;
	char Single;
}Tammi, Ummi;  // global variable declaration

int main(){
	
	Student Antora, Jenifer;
	
	Tammi = {22, 'Y'}
	
	Jenifer.roll = 23;
	Jenifer.Single = 'Y';
	
	cout << Jenifer.roll << endl << Tammi.Single << endl;
	
	return 0;
	
}
