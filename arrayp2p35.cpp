#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
const int row=5,col=3;
int pol[row][col];
string item[row] = {"5 seater sofa" , "book shelve" , "dining table" , "tv cabinet" , "queen bed"};
void calcost(int i, int pol[row][col])
{
	pol[i][2] = pol[i][1] - pol[i][0];
}
void getcost(string item[], int pol[row][col])
{
	for(int i=0 ;i<row ; i++)
	{  
		cout << item[i]<<endl;
		for(int j; j<col-1; j++)
		{
			cin >> pol[i][j];
		}
		calcost(i, pol);
	}
}
void disp(string item[], int pol[row][col])
{
	cout<<"\t\t\t  \tcost\t\t selling Price\t\t profit/loss\n\n";
	
	for(int i=0; i<row; i++)
	{ 
		cout<<item[i]<<"\t";
		for(int j=0; j<col; j++)
		{
			cout<<setw(20) <<pol[i][j];
		}
		cout<<endl;
    } 
}

int main()
{
	getcost(item, pol);
	disp(item,pol);
	getch();
}


