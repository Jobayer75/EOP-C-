#include <iostream>


using namespace std;


struct student{

 int id;
 string single;
 double height;
};
void PrintOut(student s);

int main(){
	
	student Jenifer= {1212, "Yes", 5.41};
	PrintOut(Jenifer);
}

void PrintOut(student s){
	
	cout << s.id <<endl;
	cout << s.single <<endl;
	cout << s.height <<endl;
}
