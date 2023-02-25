#include<iostream>
#include<iomanip>
#include<fstream>
#define SIZE 10
using namespace std;
int main(){

	ifstream inFile;  //*ifstream= input file stream
	ofstream outFile; //*ofstream= out file stream
	char filename[25];
	char fruitname[SIZE][10];
	float price[SIZE];
	int weight[SIZE];
	int i,j;
	
	cout<<"Enter input file name: ";
	cin>>filename;	// to read a file
	
	inFile.open(filename); // command to open the file to read
	
	if(inFile.fail()) {
		cout<<"File filed to open"<<endl;
		cout<<"Please check if the file exsist !"<<endl;
	}

	else{
		cout<<"The file "<<filename<<" has opend successfully."<<endl;
		j=0;
		while(inFile.good()) {	// read the file
			inFile>>fruitname[j]>>price[j]>>weight[j];
			cout<<fruitname[j]<<", "<<price[j]<<", "<<weight[j]<<endl;
			j++;
		}
		cout<<j<<" records have been read"<<endl;
		
		inFile.close(); //close the read file
		
		
		cout<<"The file "<<filename<<" has been close"<<endl;
		
		cout<<"Enter file name: "; // creating new file
		cin>>filename;
		cout<<"A new File Has been created"<<endl;
		
		outFile.open(filename); // new file command
		
		for(i=0;i<j;i++){ // new file data input
			outFile<<fruitname[i]<<", "<<price[i]<<", "<<weight[i];
			outFile<<", RM"<<price[i]*weight[i]<<endl;
			cout<<fruitname[i]<<", "<<price[i]<<", "<<weight[i]<<", RM"<<price[i]*weight[i]<<endl;
		}
		outFile.close(); // closing the file
		
		cout<<"The file "<<filename<<" has been close"<<endl;
	}
	
return 0;
}

