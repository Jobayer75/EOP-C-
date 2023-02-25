#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	string filename;
	ofstream outFile;
	cout << "Enter a filename: "; 
	cin >> filename;
	
	outFile.open (filename.c_str());
	
	if (outFile.fail()){
		
		cout << "The file could not be openned" <<endl;
		
		exit(1);
	}
	
	outFile << setiosflags(ios::fixed)
			<< setiosflags(ios::showpoint)
			<< setprecision(2);
	
	outFile << "Joey " << 1212  << endl
		 << "Monica " << 5432.34 <<endl
		 << "Chandler " << 8733 <<endl
		 << "Phebie "  << 933.009 << endl
		 << "Ross " << 3892 << endl;
	
	outFile.close();
	
	cout << "The file " << filename << " was successfully edited.";
			
	
	return 0;
	
	
}
