#include<bits/stdc++.h>
using namespace std;
void firstfunction();
void secondfunction();

int main()
{
  secondfunction();
  cout<<endl;
  firstfunction();
 
  return 0;
}
void firstfunction()

  {
int rv=5;
  for( int i=1;i<=5;i++)
  {
     
    for(int j=1;j<=5;j++)
    
    { 
     
      if(j>=rv)
      cout<<"1";
      else
      cout<<"0";
    }
    cout<<endl;
   rv--;
   
  }
  }
  void secondfunction()
  {
    int rv=1;
    for(int i=1;i<=5;i++)
    {
      for(int j=1;j<=5;j++)
      {
        if(j<=rv)
        cout<<"1";
        else
        cout<<"0";
        
      }
      cout<<endl;
      rv++;
    }
  }
  


