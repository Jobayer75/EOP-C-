#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c,d,e,i,avrg,f;				// integer declaration 
	int sale1,sale2,sale3,sale4,sale5;  // integer declaration 



				cout << "Please Enter Your Current Total Sale for the store 1 :";
				cin >> sale1;
				cout << endl;
				a=sale1/100;  // calculation for $ will be used later


				cout << "Please Enter Your Current Total Sale for the store 2 :";
				cin >> sale2;
				cout << endl;
				b=sale2/100;


				cout << "Please Enter Your Current Total Sale for the store 3 :";
				cin >> sale3;
				cout << endl;
				c=sale3/100;



				cout << "Please Enter Your Current Total Sale for the store 4 :";
				cin >> sale4;
				cout << endl;
				d=sale4/100;


				cout << "Please Enter Your Current Total Sale for the store 5 :";
				cin >> sale5;
				cout << endl;
				e=sale5/100;
				
				
				cout << "Average sales of all shops:";
				avrg=((sale1+sale2+sale3+sale4+sale5)/5);
				
				cout <<avrg<< endl;
				f=avrg/100;
				
				
				
				
	cout <<endl;
	cout <<endl;
	cout << "DAILY SALES (each $ represent RM 100)" << endl;
	cout <<endl;

		cout << "Store 1 : ";
	for(i=1;i<=a;i++)
{		cout << "$";

}cout <<endl;


	cout << "Store 2 : ";
	for(i=1;i<=b;i++)
	{	cout << "$";



	}cout <<endl;
	
	cout << "Store 3 : ";
	for(i=1;i<=c;i++)
{		cout << "$";

}cout <<endl;

	cout << "Store 4 : ";
	for(i=1;i<=d;i++)
{		cout << "$";



}cout <<endl;
	cout << "Store 5 : ";
	for(i=1;i<=e;i++)
{		cout << "$";

}cout <<endl;




/*cout <<endl; // if you want to see the dollars for the average just remove the comments  
	cout << "AVERAGE : ";
	for(i=1;i<=f;i++)
{		cout << "$";

}cout <<endl; */
 return 0;

 }
