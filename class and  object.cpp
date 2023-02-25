#include  <iostream>
#include <string >
using namespace std ;

class sami {
	public :
	//function1
	sami ()
	{
		cout << "this is cool ";
	}
		void sendadd (string x){
			address = x;
		}
	// function 2
		string setadd ()
		{
			return address ;
		}
	
	
	private :  string address ;
	
};





int main ()
{
	
sami a;
	/*a.sendadd  ("21 burhanbagh shibgonj");
	cout << a.setadd() << endl ;
	*/
	
	
	return 0;
}
