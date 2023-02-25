#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
using namespace std;

struct employee
{	int empId;
	char name[50];
	double salary;
};

int main()
{   
	int n;
	cout<<"Quantity of employee: ";
	cin>>n;

struct	employee details[n];
	for(int i; i<n;i++)
	{
		cout<<"FOR EMPLOYEE "<<i+1<< " :"<<endl;
		cout<<"Employee ID:";
		cin>>details[i].empId;
		cout<<"Employee Name:";
		fflush(stdin);
		cin>>details[i].name;
		cout<<"Employee Salary:";
		cin>>details[i].salary;
	}
	
	cout<<setiosflags(ios::left);
	for(int j; j<n;j++)
	{
		cout<<"Employee ID:"<<setw(10)<<details[j].empId<<endl;
		cout<<"Employee Name:"<<setw(10)<<details[j].name<<endl;
		cout<<"Employee ID:"<<setw(10)<<details[j].salary<<endl;
	}













getch();
}


