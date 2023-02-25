// Jobayer 1731833
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

int main(){
	ofstream a;
	
	struct PayRecord {
	char name[20];
	float kilogram;
	float price;
	
};

	const int numbers=5;
	PayRecord call[numbers]={{"Apple",40,3.50},
                              {"Orange",25,5.30},
                         	  {"Pear",20,4.20},
                        	  {"Banana",36,2.80},
                         	  {"Durian",48,7.50}};
    
	                     	  
	a.open("test.txt");
	
	if(a.good())
	{
		for(int i=0;i<5;i++){
			a<<call[i].name<<", "<<call[i].kilogram<<", "<<call[i].price<<endl;
		}
		cout<<"All the data has been included"<<endl;
		a.close(); 
		cout<<"The file has been closed"<<endl; 
	}

	else
	cout<<"Something went wrong check again"<<endl;
           	    
	      getch();                                 
}
