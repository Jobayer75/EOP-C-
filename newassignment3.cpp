/* Tanveer Mahmood Hasan. mat:1725413
   K.M Tansir Hussain mat:1638331 */

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

	double length,width,volume,volume2;


	const int height=3;
	const float p= 0.1;

	cout<< "please enter the length: ";
	cin >> length;

	cout<< "please enter the width is : ";
	cin >> width;

	volume = length*width*height;
	volume2= volume - (p*volume);

	cout<<"Volume of cylinder: " <<volume2 <<endl;

















	return 0;
}
