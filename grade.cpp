#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int x;
	
	cout << "enter the number\n";
	cin >> x;
	if (x>=80&& x<=100){
		cout<< "the grade is A \n";
	}
else if (x>=75&& x<=79){
		cout<< "the grade is A- \n";
	}
else if (x>=70&& x<=74){
		cout<< "the grade is B \n";
	}
	else if (x>=65&& x<=69){
		cout<< "the grade is B- \n";
	}
	return 0;
	
}
