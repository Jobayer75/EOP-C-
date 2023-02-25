#include <iostream>

using namespace std;


struct student{

 int id;
 char single;
 double height;
};
void PrintOut(student* s);

int main(){
	
	 student Jenifer= {1212, 'Y', 5.41};
	student *Jeny;
	Jeny = &Jenifer;
	
	cout << Jeny->id << endl;
	cout << Jeny->single << endl;
	PrintOut(&Jenifer);
}

void PrintOut(student* s){
	
	cout << (*s).id <<endl;
	cout << (*s).single <<endl;
	cout << (*s).height <<endl;
}
