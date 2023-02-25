#include <iostream>
using namespace std;


int main ()
{
    double rent, maintenance, mCost,iRent;
    double total, profit, maxProfit=0;
    int n,i;


    cout << "The Total number of units: ";
    cin>>i;
	cout << "The rent to occupy all the units: ";
    cin >> rent;
    cout << "The increase in rent that results in a vacant unit: ";
    cin >> iRent;
    cout << "Amount to maintain a rented unit: ";
    cin >> mCost;




    for(int units = i; units > 0; units--, rent += iRent)
    {
        total = units * rent;
        maintenance = units * mCost;
        profit = total - maintenance;

        if (profit > maxProfit)
        {
            maxProfit = profit;
            n = units;
        }
}


    cout << "number of units to be rented to maximize profit is : ";
    cout << n;
    cout << "\n";

    return 0;
}
