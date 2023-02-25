/* Tanveer Mahmood Hasan -1725413
   Md. Raisul Islam -1725501
*/
#include <iostream>
#include<conio.h>
using namespace std;

int main()
{


	int p,q,r , x =1;
	while(x<=8){


	cout <<"Row "<<x<<endl;
	cout <<"Enter value for p : ";
	cin >> p;
	cout <<"Enter value for q : ";
	cin >> q;
	cout <<"Enter value for r : ";
	cin >> r;

	if((p!= 0 && p!= 1)||(q!= 0 && q!= 1)||(r != 0 && r!= 1))
        {
            cout<<"\nInvalid input. Please enter 0 or 1 only...";
		    break;
	    }

    bool res;
	res = !(p || q);
	cout <<"\nResult of truth value expression \nDe morgan's law program : ";
	cout <<"!(p || q) == !p && !q ----> <"<<res<<" == "<<res<<">"<<endl;
	res = (p || q) && !r;
	cout <<"(p || q) && !r = " <<res<<endl;
	res = !(p || (!q && r));
	cout<<"!(p || (!q && r)) = " <<res<<endl<<endl;
	 x++;
	}


getch();
}
