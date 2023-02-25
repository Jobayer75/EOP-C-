#include<iostream>
#include<cmath>
using namespace std;
template <class T>
void multiply ( T e,T f)
{ T r;
   r=e*f;
  cout<<"The multiple is "<<r<<endl;
  return;
}
template <class U>

void minnum (U e ,U f)
{
  U minnum;
  if(e<=f)
  minnum=e;
  else 
  minnum=f;
  cout<<"The minimum number is "<<minnum<<endl;
  return;
}

template <class V>
double calcAvg(V a,V b)
{
  V avg,total;
  total=a+b;
  avg=total/2;
  
  return avg;
}
double calcVol(double,double);

int main()
{ 
  double c,d,average, input1,input2,volume;

  
  cout<<"Enter the 1st integer "<<endl;
  cin>>c;
  cout<<"Enter THe 2nd integer "<<endl;
  cin>>d;
  multiply(c,d);
  minnum(c,d);
   average= calcAvg(c,d);
  cout<<"The averge is "<<average<<endl;
  cout<<"Enter The  radious :"<<endl;
  cin>>input1;
  cout<<"Enter the height :"<<endl;
  cin>>input2;
  volume=calcVol(input1,input2);
  cout<<"The volume of the cone is "<<volume<<endl;
    cout<<"thanks"<<endl;

  
  return 0;
}
double calcVol(double r,double h)
{
	const double pi=3.1416;
	double V;
	V=(pi*(r*r)*h)/3;
	return V;
}
