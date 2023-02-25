#include<iostream>
#include<math.h>
#define Months 12
using namespace std;
int main()

{
int i,year[Months];
int x=3,y=4;
year[0]=1;
    cout<<year[0]<<endl;  
year[0+1]=2;
   cout<<year[1]<<endl;
year[x-1]=year[0]+year[--y - 2];
    cout<<year[2]<<endl;
year[x]=Months/3;
  cout<<year[3]<<endl;
year[5]=5;
    cout<<year[5]<<endl;
year[5]=6;
   cout<<year[5]<<endl;
year[x*2]=7;
    cout<<year[6]<<endl;
year[7]=pow(x,2) -1;
    cout<<year[7]<<endl;
year[8]=x*3;
    cout<<year[8]<<endl;
year[x*x]=10;
    cout<<year[9]<<endl;
year[10]=x+y+5;
    cout<<year[10]<<endl;
year[11]=Months;   
    cout<<year[11]<<endl;
return 0;}
