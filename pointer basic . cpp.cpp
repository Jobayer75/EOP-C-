#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct payrec
{int id;
string name ;
double rate ; 
};
int main ()
{
	const int num = 5 ;
	payrec emp [num]={
	{01,"SAMI", 200.50},
	{20,"AMI", 300.50},
	{003,"MI", 2500.50},
	{04,"SMI", 2300.50},
	{05,"ZAMI", 2500.57}
	
	};
	cout << endl ;
	cout << setiosflags(ios::left);
	for (int i=0; i<num;i++){
		cout << setw(7)<< emp[i].id
		<<setw(15)<< emp[i].name
		<<setw (6)<< emp[i].rate << endl;}
	}


