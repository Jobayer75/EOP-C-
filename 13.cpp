#include<iostream>

using namespace std;

struct groc
    {
        string name;
        double price;
        double weight;
        double total_price;
    } ;

double total(groc *items, double a, double b);

int main()
{
    groc items[5] = {
    {"Cabbage", 1.50, 1.4},
    {"Chicken", 9.80, 8.5},
    {"Sugar", 2.75, 3.2},
    {"Flour", 2.55, 5.8},
    {"Oil", 4.60, 4.0},
    };

    cout<<"The groceries items and their prices: \n\n";
    for(int i=0; i<5; i++)
    {
        cout
    <<items[i].name<<" "
    <<items[i].price<<" "
    <<items[i].weight<<" "
    <<total(items, items[i].price, items[i].weight)
    <<endl<<endl;
    }
    return 0;
}


double total(groc *items, double a, double b)
{
   return a * b;
}

