#include <iostream>
#include <cstdlib>
#include <ctime>

int rolldice(int x);

using namespace std;

int main(){
	
	
	cout << rolldice( 6 ) << endl;
	
	return 0;
}

int rolldice(int x){
	
	int die1;
	int die2;
	int sum;
	int rollcount =  0;
	
	srand (time(0));
	
	do {
		
	die1= rand()%6+ 1;
	die2= rand()%6+ 1;
	
	sum = die1+die2;
	
	rollcount++;
		
	}while (sum != x);
	
	return rollcount;	
}
