#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

void computeProfit(int quantity, double profitrate, int iprice, int mquantity )

{
cout<<"Quantity\tProfit Rate\tProfit-per-item"<<endl;

 for(int i=quantity; i<=mquantity; i+=1000)
 {
    //double ppi = iprice/i;
    double profitPerItem=(i*(profitrate/100)*(iprice/quantity));



    cout<<left<<setw(18)<<i;
	cout<<left<<setw(18)<<profitrate;
    cout<<left<<setw(18)<<profitPerItem<<endl;

    profitrate-=0.1;

  }
}
int main()
{
	int quantity, profitrate, iprice, mquantity;

	cout<<"Enter your starting quantity : ";
	cin>>quantity;

	cout<<"Enter your profit rate : ";
	cin>>profitrate;

	cout<<"Enter item price : ";
	cin>>iprice;

	cout<<"Enter max quantity : ";
	cin>>mquantity;



	computeProfit(quantity, profitrate, iprice, mquantity);








getch();
}


