/* Tanveer Mahmood Hasan. mat:1725413
   K.M Tansir Hussain mat:1638331 */

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{

	double length,width,length2,width2,volume,volume2;


	const int height=3;
	const float p= 0.1;

	cout<< "please enter the length: ";
	 cin >> length;

	cout<< "please enter the width: ";
	 cin >> width;


	volume = length*width*height;
	volume2= volume-(p*volume);
	length2= length-(length*0.05);
	width2= width-(width*0.05);

	cout<<"New length: "<< length2 <<endl;

    cout<<"New width: "<< width2 <<endl;

	cout<<"Volume of cylinder: \n" <<volume2;

















	return 0;
}
