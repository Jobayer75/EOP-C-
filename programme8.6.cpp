#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	const int arraysize=5;
	int grade[arraysize]={8,9,10,11,12};
	int *gptr;
	gptr=&grade[0];

	for(int i=0;i<arraysize;i++)
	{
		cout<<" Element "<<i<<" : "<<*(gptr+i)<<endl;
	}
	cout<<endl;
	
	
getch();
}
