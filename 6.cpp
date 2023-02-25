#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{

for(int i=1;i<=7;i++)
{
    cout<<"     ";
    for(int j=6;j>=i;j--)
    {
        cout<<" ";
    }
    for(int k=1;k<=(2*i-1);k++)
    {
        cout<<"*";
    }
    cout<<endl;
}

    for(int i=1;i<=7;i++)
    {
        cout<<"     ";
        for(int j=1;j<=i;j++)
        {


            cout<<" ";
        }
        for(int k=11;k>=(i*2-1);k--)
        {
            cout<<"*";
        }

        cout<<endl;

}

return 0;
}





