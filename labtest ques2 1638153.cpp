#include<iostream>
using namespace std;
void convertMeasure(float,float);
int main()
{float pound,ounce;
char doAgain='y';
while ((doAgain=='y')||(doAgain=='Y'))
{cout<<"Enter pounds=";
cin>>pound;
cout<<"Enter Ounce=";
cin>>ounce;
convertMeasure(pound,ounce);
cout<<"\n \n Do you want to do tis again ? (y/n)";
cin>>doAgain;
cout<<endl;}

return 0;}

void convertMeasure(float a,float b)
{float kg,gram;

kg=a*0.453592;
gram=b*28.3495;
cout<<"Pounds\t\tKilogram\t\tOunce\t\t Gram\n";
cout<<a<<"\t\t\t" <<kg<<"\t\t\t"<< b <<"\t\t"<<gram;




  return ;
}
