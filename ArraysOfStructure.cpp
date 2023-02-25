#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


struct PayRecord{
	
	int id;
	string name;
	double rate;
};

int main(){
	
	const int numbers = 5;
	cout<<"ID      NAME           RATE"<<endl;
	
	PayRecord Array[numbers]= {{3, "Meem", 12.50},
	                            4, "Misty", 3.80,
								5, "Shama", 9.80,
								6, "Prima", 8.70,
								7, "Anan", 21.68,};
	
	cout << endl;
	cout << setiosflags(ios::left);
	int i;
	for ( i = 0; i < numbers; i++){
		cout <<setw(7) << Array[i].id 
		 <<setw(15)<< Array[i].name
		 <<setw(6)<< Array[i].rate << endl;
		
	}
	
}




