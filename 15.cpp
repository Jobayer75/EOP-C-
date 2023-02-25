#include <iostream>

using namespace std;

int main()
{
	
	int prime[4][4]={{2,3,5}, {7,11,13}, {17,19,23},{29,31,37}};
	
	
	
	
	
	
	 for (int i = 0; i < 4; i++){
		
		
	  prime[i][3] = prime[i][0] + prime[i][1] + prime[i][2];
	}
	
	
	for (int i = 0; i < 4; i++){
		
		
	  for (int j = 0; j < 4; j++){
		
		cout << prime[i][j] << "\t";
	
	}
	cout << endl;
	}
	
	 for (int k = 0; k < 4; k++){
	 	
		
		 	
			 cout << prime[k][k] << "\t";
		 	
		 
	 	
	 }
	
	return 0;
}

