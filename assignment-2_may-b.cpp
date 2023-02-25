#include <iostream>
using namespace std;
const int row = 5, col = 3;
string names[row] = {"Mangofruit" ,"MandarinOrange","AustralianKiwi","Fuji Pear","Jackfruit"};
string word[col] = {"Cost" , "Selling Price","Profit/Loss"};
double cost[row][col];
void cal(double cost[row][col]);
void display(string names[row],string word[col],double cost[row][col]);

int main()
{
    for (int x = 0; x < row ;x++)
    {
        for (int y = 0; y < col-1;y++)
        {
            cout << "Enter the "<< word[y] << " for " << names[x]
            << ":" << endl;
            cin >> cost[x][y];
            

        }
    }
    cal(cost);
    display(names,word,cost);
    

    retur 0;
}

void cal(double cost[row][col])
{
    for(int i = 0; i < row;i++)
        cost[i][2] = cost[i][1] - cost[i][0];
}

void display(string names[], string word[],double cost[row][col])
{
    cout << "\t\t\t\t" << word[0] << "\t\t\t" << word[1]
    << "\t\t\t" << word[2] << endl << endl;
    
    for (int j = 0; j < row ; j++ )
    {
    cout << names[j] << "\t\t\t" << cost[j][0]
        << "\t\t\t" << cost[j][1] << "\t\t\t\t" << cost[j][2]
        <<endl;
    }
    return;
}
