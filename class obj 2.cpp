#include <iostream>
//#include <string >
using namespace std ;

class classy {
  
  public :
  	
  			classy (int q){
  				f1(q);
  				cout << "the age is 21 \n"; 
  			}
  	
  // func1 
            int f1 (int x){
              age = x ;
            }
  // func2 
            int f2 ()
            {
              return age;
            }
  
  private :
            int age ;  
};




int main () {
  
  classy cr7 (2449);

  cout  << cr7.f2 ()<< endl ;
  
  
//classy cr10 (15);  cout << cr10.f2();
  
  
  return 0;
}

