#include <iostream>
#include <conio.h>
using namespace std;

int  main()
{
	 int a, b, c=0;
	 cout<<"Enter The First Number : ";
	 cin>>a;
	 cout<<"Enter The Second Number : ";
	 cin>>b;

	 for(int i=1;i<=b;i++)
	{
		c+=a;
	}

	cout<<a<<" multiplied by "<<b<<" is : "<<c<<endl;
getch();
}
