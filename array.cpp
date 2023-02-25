#include<iostream>
#include <cstring>
using namespace std;
void grade ();


int main (){
  
  grade ();
  
  return 0;
  
  
  
}

void grade ()
{
  float total = 0;
  float avg;
  const int SIZE=5;
  float gr[SIZE];
  string names [SIZE];
  for (int i=0; i<SIZE ; i++){
  cout<<" enter the grade :";
  cin >> gr[i];
  cin>> names[SIZE];
  total += gr[i];
  avg= total/SIZE;
  }
  
   for (int i=0; i<SIZE ; i++){
  cout<<" Your grades are :";
  cout << gr[i]<<""<< endl;
     cout << "names are "<< names<< endl;
  
     
   }
   cout<< "your total is "<< total << endl; 
   cout<< "your avg is "<< avg<< endl;

return;
  
}

