#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include <map>
#include <ctype.h>
#include <iomanip>

using namespace std;
int guess[9], c = 0, r = 0;

char correct[8] = { 'B', 'B', 'R', 'R', 'B', 'R', 'R', 'B' };

void find_score(char arr[9]){
	int guess[9];
	for (int i = 0; i < 8; i++){
		if (arr[i] == correct[i]){
			guess[i] = 1;
			c++;
		}
		else{
			guess[i] = 0;
			r++;
		}
	}
	cout << c << "C, " << r << "W" << endl;
	for (int i = 0; i < 8; i++)cout << guess[i] ;
	
}

int main(){

	char arr[9];
	for (int i = 0; i < 8; i++)cin >> arr[i];
	find_score(arr);
	cout << endl;

	return 0;
}
