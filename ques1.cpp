// Tanveer Mahmood Hasan-1725413

#include <iostream>
using namespace std;

int main (){
for (int i =0 ; i < 6; i++)
    {
        for (int j = 0;j <= i; j++)
        {
            if (((i + j) % 2) == 0)
                cout<<("1");
            else
                cout<<("0");
            cout<<("");
        }
        cout<<("\n");
    }

    return 0;
}

