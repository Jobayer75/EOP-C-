/* Tanveer Mahmood Hasan. mat:1725413
   K.M Tansir Hussain mat:1638331 */

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

	double length,length2,width,width2, volume;


	const int height=3;
	const float p= 0.05;

	cout<< "please enter the length: ";
	cin >> length;

	length2 = length- (p*length);
	cout<< "The New length: " <<length2 <<endl;

	cout<< "please enter the width is : ";
	cin >> width;
	width2 = width- (p*width);
	cout<<"The new width is: "<< width2<<endl;

	volume = length2*width2*height;

	cout<<"Volume of cylinder: " <<volume <<endl;

















	return 0;
}
