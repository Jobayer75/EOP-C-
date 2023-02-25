#include<iostream>
using namespace std;
int main()
{
  int i,j,k=1,y;
  cout<<"     October 2017"<<endl;
  cout<<"          SU"<<"\t"<<"Mon"<<"\t"<<"Tu"<<"\t"<<"WED"<<"\t"<<"TH"<<"\t"<<"Fr"<<"\t"<<"SAT"<<endl;
  for (i=1;i<=5;i++)

  {

    for(j=1;j<=7;j++)
    {

if(k>=1&&k<=31)
{
      cout<<"\t "<<k;
      k+=1;
}
    }cout<<endl;
  }
  return 0;
}
