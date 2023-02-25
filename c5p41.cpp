#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int count,num,total=100;
	while (count <=10)
	{
		cout<<"Enter a number : ";
		cin>> num;
		if(num < 0 || num > 100)
		
			{
			continue;
			total=total+num;
			count++;}
		else
		break;

	}

cout<<total;












getch();
}


