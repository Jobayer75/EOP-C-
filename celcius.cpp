#include<iostream>
#include<conio.h>
using namespace std;
int sum = 0, avg = 0;
int main()
{	
	const int row=7,col=4;
	
	int celcius[row][col];
	for (int i=0 ; i <row;i++)
	{ cout <<"Enter temparature for day "<<i+1<<" :";
		for (int j = 0;j<col-1 ; j++)
		{
		cin >>	celcius[i][j];
	}
	
	}
	

	for (int i=0 ; i <row;i++)
	{ 
		for (int j = 0;j<col-1 ; j++)
	{	sum += celcius[i][j];
	}
	avg = sum/(col-1);
		celcius[i][3]=avg;
		sum=0;
	}
	
		
		
	
		
	
	cout <<"Day\t\tMorning\t\tAfternoon\t\tNight\t\tDailyAvarage"<<endl;
	for(int i=0 ; i<row;i++)
	{cout << i + 1;
		for(int j=0 ; j<col; j++)
		{
			cout<<"\t\t" <<celcius[i][j];
		}
		cout << endl;
	}













getch();
}


