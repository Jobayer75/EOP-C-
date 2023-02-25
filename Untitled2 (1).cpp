#include <iostream>
using namespace std;

int main()
{


	int p,q,r , x =1;
	while(x<=8){


	cout <<"Row "<<x<<endl;
	cout <<"Enter the value of p : ";
	cin >> p;
	if(p!= 0 && p!= 1){
		cout<<"Wrong input !";
		break;
	}
	cout <<"Enter the value of q : ";
	cin >> q;
	if(q!= 0 && q!= 1){
		cout<<"Wrong input !";
		break;
	}
	cout <<"Enter the value of r : ";
	cin >> r;
	if(r != 0 && r!= 1){
		cout<<"Wrong input !";
		break;
	}
	bool res;
	res = !(p || q);
	cout <<"Result of truth value expression \nDe morgan's law program : ";
	cout <<"!(p || q) == !p && !q ----> <"<<res<<" == "<<res<<">"<<endl;
	res = (p || q) && !r;
	cout <<"(p || q) && !r = " <<res<<endl;
	res = !(p || (!q && r));
	cout<<"!(p || (!q && r)) = " <<res<<endl;
	 x++;
	}
	return 0 ;


}
