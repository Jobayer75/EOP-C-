// Jobayer 1731833
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	struct PayRecord{
	string Name;
	float kilogram;
	float price;
	
};

      cout<<endl;
	  cout<<setiosflags(ios::left);
	     
	  string words;
	ifstream file("test.txt");
	while(getline(file,words))
	{
		cout<<words<<endl;
	}
	file.close();              	    
	      getch();                                 
}
