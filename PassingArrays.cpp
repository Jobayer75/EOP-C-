#include <iostream>

using namespace std;


int PassThis(int [], int);

int main(){

const int num = 5;
int Array[num] = {7,32,44,85,12};

cout << PassThis(Array, num ) ;

}
int PassThis(int theArray[], int numbers){
	int i;
	int max = theArray[0];
	for (i = 1; i < numbers; i++){
		if(max<theArray[i]){
			max = theArray[i];
		}
	}
			
		
		return max;
		
	
	
}

