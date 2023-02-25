
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	struct description
	{
		char name[8];
		double kg;
		double price;
	};
	description fruits[5];
	ofstream outData;
	outData.open("test.txt");	
    cout<<"Enter details of five fruits"<<endl;
	for(int i = 0 ; i < 5 ; i++)
	{
		cout<<"Name of the fruit: ";
		cin >>fruits[i].name;
		cout<<endl;
		cout<<"Amount in stock: ";
		cin >>fruits[i].kg;
		cout<<endl;
		cout<<"Price: ";
		cin >>fruits[i].price;
	}
	for(int i = 0 ; i < 5 ; i++)
	{
		  outData<<setw(14) <<left <<fruits[i].name <<setw(5) <<left <<fruits[i].kg <<fruits[i].price <<"\n";

	}
	outData.close();
	return 0;

}
