#include <iostream>

using namespace std;


int main()
{
    int SIZE;
    
    cout << "Enter the number of the size of the array: " ;
    cin >> SIZE;
    
    int *pointer = new int[SIZE];
    
    for (int i = 0; i < SIZE; i++){
    	
		cout << "Please Enter grade " << i  << ": "; 
    	cin >> *(pointer + i);
	}
	for (int j = 0; j < SIZE; j++){
		cout << *(pointer + j) <<endl;
	}
}


