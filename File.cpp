#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	string name;
	int age;
	
	ofstream file;
	file.open("Student.txt",ios::out|ios::app);
	
	cout<<"Enter your name : ";
	getline(cin,name);
	file <<name<<"\t";
	file.close();
	
getch();	
}
