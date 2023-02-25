#include <iostream>
#include<conio.h>
#include <iomanip>

using namespace std;

struct Groceries
{

    string name;
    double PricePerKg;
    double weight;
    int quantity;
    double totalSales;
};

double calcSale(Groceries[],int);
void sortGrocery(Groceries[],int);

int main()
{
    const int SIZE = 4;
    Groceries item[SIZE] = {{"Cabbage",2.30,1.5,3},
     					    {"Spinach",2.55,0.8,5},
      					    {"Carrot",3.45,2.1,7},
                            {"Potato",3.60,3,2}};

    for (int x = 0 ; x < SIZE;x++)
    {
    calcSale(item,x);
    }
    sortGrocery(item,SIZE);

   getch();
}

double calcSale(Groceries item[],int x)
{
     item[x].totalSales = item[x].PricePerKg * item[x].weight * item[x].quantity;

    return item[x].totalSales;
}

void sortGrocery(Groceries item[],int S)
{
    Groceries temp;

    for (int i = 0; i < 15 ; i++)
    {
        for (int j = 1;j < S ; j++)
        {
            if ((item + j) -> totalSales > (item + j - 1) -> totalSales)
            {
                temp = *(item + j);
                *(item + j) = *(item + j - 1);
                *(item + j - 1) = temp;
            }
        }
        }

    cout << "Grocery"<<setw(15)<<"Price/kg"<<setw(15)<<"Weight"<<setw(15) <<"Quantity"<<setw(15) <<"\tTotal Sales"<<setw(15) <<endl;

    for (int x = 0;x < S ; x++)
    {
        cout <<setw(10)<<left<<item[x].name
        << setw(10)<<right<<fixed <<setprecision(2) << item[x].PricePerKg
        << setw(15)<<right<<fixed <<setprecision(2) <<item[x].weight
        << setw(15)<<right<<fixed <<setprecision(2) <<item[x].quantity
        << setw(15)<<right <<fixed <<setprecision(2)<<item[x].totalSales <<"\n";

    }
}
