#include <iostream>

using namespace std;

int secret(int x);
//double larger(double x, double y);
//double compare_three(double x, double y, double z);


int main(){

      cout << secret(7) << endl;
 //   cout << larger(9,6) << endl;
 //   cout << compare_three(9 , 6, 10) << endl;

	return 0;
    
}

int secret(int x){
	
	if (x>=5)
	 return 2*x;
	
	return x;
}

//double larger(double x, double y){
	
//	double max;
//	if (x>y)
//	max = x;
//	else max = y;
	
//	return max;
//}
//double compare_three(double x, double y, double z){
	
//	return larger ( larger(x,y), z);
//}
