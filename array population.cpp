#include <iostream>
using namespace std;

int item ( double array1[], int num );

void spit (double array1[], int num);

int main (){
	double sami [3]={};
	item (sami , 3);
	spit (sami , 3 );
	
	
	
return 0;
}
int item ( double array1[], int num ){
	double input ;
	int i;
	for (i=0;i<num ;i++)
	{
		cout <<"enter values "<<(i+1)<< endl;
		cin >> input ;
		array1 [i]= input ;
		
	}   
	return i;
}

void spit (double array1[], int num){
	for (int i=0; i< num  ; i++){
		cout << "the value of the item "<< (i+1)<< " is " << array1 [i] << endl;
	}
	
}
