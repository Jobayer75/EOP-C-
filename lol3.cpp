#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
    string num[15]={},i;
	cout<<"Enter fruit name: ";
	
		for(int i=0;i<3;i++)
		{
		
		cin>>num[i];
		cout<<setw(4);
		cout<<num[i];
	}
    
    return 0;
}
