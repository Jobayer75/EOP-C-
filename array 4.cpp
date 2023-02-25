#include<iostream>
using namespace std;
int main()
{
    int a;
    int list[10]={0,6,0,5,0,4,0,3,0,2};
    
    for (a=0;a<5;a++)
    list [2*0+1]=a+2;
    for(a=0;a<10;a++)
    cout<<list[a]<<endl;
    return 0;
    }
