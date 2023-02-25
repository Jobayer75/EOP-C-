// Jobayer 1731833
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
#include<string>
freopen ("myfile.txt","w",stdout);
using namespace std;

int main(){
	ofstream a;
	
	struct PayRecord {
	char name[20];
	float kilogram;
	float price;
	
};

	const int numbers=5;
	PayRecord call[numbers]={};
    

		for(int i=0;i<5;i++)
		{
			cin>>call[i].name
			>>call[i].kilogram
			>>call[i].price<<endl;
		}  	    
	      getch();                                 
}
