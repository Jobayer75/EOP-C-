#include<iostream>
#include "myslope.h"

using namespace std;

int main()
{
    double x1,x2,y1,y2;
    int x=4;	
    cout<<"Enter the first value without the decimal points: "<<endl;
    cin>>x1;
    cout<<"Enter the second value without the decimal point:"<<endl;
    cin>>x2;
    cout<<"Enter the third value without the decimal point: "<<endl;
    cin>>y1;
    cout<<"Enter the fourth value without the decimal point:"<<endl;
    cin>>y2;
cout << "Slope of the line with end points: (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") = "<< endl;
 
    cout<< findslope(x1,x2,y1,y2,x)<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
