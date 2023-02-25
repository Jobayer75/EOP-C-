#include <iostream>

using namespace std;

int main()
{
	int number;
	double total=0,total_package,package;
	char choise;
	cout<<"                                 welcome to lalulo travels"<<endl<<endl;
	cout<<"please enter number of person:";
	cin>>number;
	if(number>=5)
	  cout<<"package 1 price is 450.00\n";
	else if(number>=3)
	  cout<<"package 2  price is 250.00\n";
	else if(number>=1)
	  cout<<"package 3 price is 100.00\n";
	else
	 cout<<"package price is 20.00";
	  
	  cout<<"enter the total_package:";
	  cin>>total_package;
	  if(total_package>5000)
	    cout<<"1.souvenir\n2.umbrella\n3.shopping bag or cap"<<endl;
	else 
	   cout<<"error";
	   cout<<"how many meal you want to order:";
	   cin>>package;
	   if(package>5&&package<100)
	    cout<<"price is 20.00";
	
	return 0;
}

