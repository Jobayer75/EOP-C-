#include <iostream>

using namespace std;


int PassByValue(int);
int main(){
	
 int x = 10;
 int c;
 c=PassByValue(x);
 
 cout << c ;
}
int PassByValue(int num){
	num = 20;
return num;	
}

