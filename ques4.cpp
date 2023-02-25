//Tanveer Mahmood Hasan-1725413
#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    for (int i=1; i<100; i++)
    {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime) cout << i << " ";
    }
    getch();
}
