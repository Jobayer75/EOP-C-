#include <iostream>
using namespace std ;

	void calcAvg (int , int  );
int main ()
{
	int x,y;
	cout <<" enter the first num :" << endl;
	cin >> x;
	cout <<" enter the second num :" << endl;
	cin >> y;
	calcAvg (x,y);
	return 0;
}
	
	
	void calcAvg (int x, int y )
	{
		int minnum;
		if (x<=y)
			minnum = x;
		else 
			minnum = y;
		cout <<"\n the minimum of two number is " << minnum << endl;
		return ;
		
	}
	
	
	
	

