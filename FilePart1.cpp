#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
	
	ifstream inFile;
	inFile.open ("prices.dat");
	
	if (inFile.fail()){
		
		cout << "The file could not be openned" <<endl;
		
		exit(1);
	}
	
	cout << "File successfully openned";
	
	return 0;
	
	
}
