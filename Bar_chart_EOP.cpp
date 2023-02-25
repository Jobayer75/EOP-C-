#include <iostream>

using namespace std;

const int assign = 5;
int medal[assign];

int bar_chart();

int main()
{
    int average = 0;
    bar_chart();
    
    // Counting the average number of medals of 5 countries
    
    for (int z = 0; z < assign ; z++)
        average+= medal[z];
    
    average = average / assign;
    
    cout << "Average medals won  =" << " " << average ;
    
    // Using asterisk (*) where it represents 10 medals each
    
    cout << endl << endl << "MEDALS (each * represents 10 medals)" << endl;
    
    for (int k = 0 ; k < assign ;k++)
    {
        cout << "Country " << k + 1 << " :";
        medal[k] = medal[k] / 10;
    
    
    for (int j = 0 ; j < medal[k] ; j++)
        {
            cout << "*";
            
        }
        cout << endl;
    }
    
    
    return 0;
}

// Operation of bar_chart function

int bar_chart()
{
    for (int k = 0; k < assign; k++)
    {
        float round[k];
        cout << "Enter medal for country "<< k + 1 << " :" << " ";
        cin >> medal[k];
        round[k] = medal[k] % 10;
        if (round[k] >= 5)
            medal[k] = medal[k] + (10 - round[k]);
        else
            medal[k] = medal[k] - round[k];
    }
    return 1;
}
