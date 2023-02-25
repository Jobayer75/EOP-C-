#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	string filename;
	
	ifstream InFile;
	cout << "Enter a filename: "; 
	cin >> filename;
	
	InFile.open (filename.c_str());
	
	if (InFile.fail()){
		
		cout << "The file could not be openned" <<endl;
		
		exit(1);
	}
	
	while (getline(InFile,filename)){
		cout << filename <<endl ;
	}
	
	InFile.close();
			
	
	return 0;
	
	
}
