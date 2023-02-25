#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<< "enter the month";
	cin>> a ;
	cout << "enter the day";
	cin>> b;

	if (a>=1 && a<=3 && a%3!=0 || b<=21)
	{
	cout<<"summer";
	}
	else {
            cout<< "spring";
        }



	return 0;






}
