#include<iostream>
using namespace std;

int max_qua;


void computeProfit(int quantity , float profitRate , float price){
	float profitR = profitRate;
	cout<<("Quantity           Profit Rate          Profit per item")<<endl;
	for(int i = quantity ; i <= max_qua ; i = i+1000){
		cout<<i<<"       "<<profitR<<"         "<<((profitR * i) / 100)<<endl; 
		profitR = profitR - 0.1;
	}
}

int main() 
{
		int quan ; 
		float  profitRa , price;
	   cout<<"Enter the starting quantity : ";
	   cin >> quan;
	   cout<<"Enter the profit rate : ";
	   cin >> profitRa;
	   cout<<"Enter the price per item : ";
	   cin >> price;
	   cout<<"Enter the max quantity : ";
	   cin >> max_qua;
	   computeProfit(quan , profitRa , price);
	   
    return 0;
}
