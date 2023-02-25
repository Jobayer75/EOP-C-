// Jobayer 1731833
#include <iostream>
#include <string>
using namespace std;

struct fruitData
{
	string fruitName;
	float price;
};

struct invoiceData
{
	char Name[10];
	float kilogram;
	float price;
} ;



int main()



	cout << "Welcome to the fruit market" << endl;
	cout << "Would you like to purchase fruit?" << endl;
	cin >> choice >> endl;

	while (choice == 'Y')
	{
	cout << "Which fruit?" << endl;
	cin >> fruit_choice >> endl;

	cout << "How many pounds?" << endl;
	cin >> pounds_choice >> endl;
	
	if (fruit_choice == "Banana")
	{
	customers[0].quantity_ordered = pounds_choice;
	customers[0].total_price = customers[0].quantity_ordered * customers[0].price;
	}
	else if (fruit_choice == "Apple")
	{
	customers[1].quantity_ordered = pounds_choice;
	customers[1].total_price = customers[1].quantity_ordered * customers[1].price;
	}
	else if (fruit_choice == "Pears")
	{
	customers[2].quantity_ordered = pounds_choice;
	customers[2].total_price = customers[2].quantity_ordered * customers[2].price;
	}
	else if (fruit_choice == "Oranges")
	{
	customers[3].quantity_ordered = pounds_choice;
	customers[3].total_price = customers[3].quantity_ordered * customers[3].price;
	}
	else (fruit_choice == "Papaya")
	{
	customers[4].quantity_ordered = pounds_choice;
	customers[4].total_price = customers[4].quantity_ordered * customers[4].price;
	}
	}

	for (count = 1 ; count <=5 ; count++)
	{
	if (customers[0].total_price != 0)
	{
		cout << customers[0].fruit_name <<
		cout << customers[0].quantity_ordered <<
		cout << customers[0].price <<
		cout << customers[0].total_price <<

	}
	}



} 
