#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
	string filename;
	ifstream inFile;
	cout << "Enter a filename: "; 
	cin >> filename;
	
	inFile.open (filename.c_str());
	
	if (inFile.fail()){
		
		cout << "The file could not be openned" <<endl;
		
		exit(1);
	}
	
	cout << "File successfully openned";
	
	return 0;
	
	
}
