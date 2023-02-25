#include<iostream>
#include<string> 
#include <iomanip>
using namespace std ;



  struct market {
   string items;
   double price ;
   double weight ;
   double totalcost ;
  }  ;
  
  int total_cost (market); //function prototype 
  
  
int main ()
{ 
  const int shoprec = 5;
  market details [shoprec]={
    {"cabbage",1.50,1.4, 1.50*1.4},
    {"chicken",9.80,8.50, 9.80*8.50},
      {"sugar",2.75,3.2,2.75*3.2},
       {"flour",2.55,5.8, 5.8*2.55},
        {"XYZ",4.60,4.0,4.60*4.0 }
    };
    cout << endl ;
    cout << setiosflags (ios:: left);
    for (int i=0; i <5 ; i++){
      cout<< setw(7)<< details [i].items
          << setw(15)<< details [i].price  
          << setw (6) << details[i].weight
          << setw(7)<< details [i].totalcost<< endl;
    }
 
 
 
 
 
  
 
  double total ;
  total = total_cost (record);
  cout << "Total cost is :"<< total << endl ;
  return 0;
}

int totalamount (market rec)
{
  return rec.price*rec.weight;
  
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  /*const int stdrec = 5;
  student details [stdrec]={
    {"ABC",1234,15.5},
    {"DEF",5678,16.5},
      {"GHI",2468,17.5},
       {"PQI",1357,18.5},
        {"XYZ",6543,19.5}
    };
    cout << endl ;
    cout << setiosflags (ios:: left);
    for (int i=0; i <stdrec ; i++){
      cout<< setw(7)<< details [i].name
          << setw(15)<< details [i].matric 
          << setw (6) << details[i].credit_hr << endl;
    }
  student ID;  
  ID.name = "sami ";
  ID.matric = 1638153;
  ID.credit_hr=17;
  
  cout << "the details of the students are :"<<ID.name
      <<"/"<< ID.matric<<"/"
     <<ID.credit_hr<< endl;
  */

