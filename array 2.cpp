#include<iostream>
using namespace std;
int main()
{
  char zikir[50]="halliludmahla";
    int i;
    cout<<"your zikir for today is ";
     for(i=12;i>=0;i--)
    {
        cout<<zikir[i];
    }
    cout<<endl;
    return 0;
}
