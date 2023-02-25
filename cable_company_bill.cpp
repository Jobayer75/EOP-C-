#include <iostream>
#include <iomanip>

double Residential();
double Business();
using namespace std;

//Named constants - residential customers

const double RES_BILL_PROC_FEES = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

//Named constants - business customers

const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BASIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;

int main(){
	
	
	int accountNumber;
	char customerType;
	double amountDue;
	cout << fixed << showpoint; //Step 1
	cout << setprecision(2); //Step 2
	cout << "This program computes a cable bill."
	<< endl;
	cout << "Enter account number: "; //Step 3
	cin >> accountNumber; //Step 4
	cout << endl;
	cout << "Enter customer type: R, r "
	<< "(Residential), B, b (Business): "; //Step 5
	cin >> customerType; //Step 6
	cout << endl;
	switch (customerType) //Step 7
		{
		case 'r': //Step 7a
		case 'R':
		amountDue = Residential(); //Step 7a.i
		cout << "Account number = "
		<< accountNumber << endl; //Step 7a.ii
		cout << "Amount due = $"
		<< amountDue << endl; //Step 7a.ii
		break;
		case 'b': //Step 7b
		case 'B':
		amountDue = Business(); //Step 7b.i
		cout << "Account number = "
		<< accountNumber << endl; //Step 7b.ii
		cout << "Amount due = $"
		<< amountDue << endl; //Step 7b.ii
		break;
		default:
		cout << "Invalid customer type."
		<< endl; //Step 7c
		}
	return 0;
}

double Residential(){
	
	int NumberOfChannels;
	double billAmount;
	
	cout << "Enter the number of Channels: " ;
	cin >> NumberOfChannels;
	
	billAmount = RES_BILL_PROC_FEES + RES_BASIC_SERV_COST + NumberOfChannels*RES_COST_PREM_CHANNEL;
	
	return billAmount;
	
	
}
double Business(){
	
	int noOfBasicServiceConnections;
	
	int noOfPChannels; //number of premium channels
	double bAmount; //billing amount

	cout << "Enter the number of basic " << "service connections: ";
	cin >> noOfBasicServiceConnections;
	cout << endl; 
 
	cout << "Enter the number of premium " << "channels used: ";
	cin >> noOfPChannels;
	cout << endl;

		if (noOfBasicServiceConnections <= 10)

	bAmount = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + noOfPChannels * BUS_COST_PREM_CHANNEL;

	else
	bAmount = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + (noOfBasicServiceConnections - 10) *BUS_BASIC_CONN_COST +
	noOfPChannels * BUS_COST_PREM_CHANNEL;

	return bAmount;
}

