
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


#define PI 3.14159265

int main ()
{
double rate, result;
cout<<"Enter the sine degree :"<<endl;
cin>>rate;
result = sin (rate*PI/180);
cout<<"The sine of " << rate << " degrees is " << result <<endl;
return 0;
}

