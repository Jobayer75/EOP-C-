#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   int array=27;
	char secretMsg[]="Why are pointers difficult?";
	//cout<<secretMsg;

	char *ptr;
	ptr = secretMsg;
	
	for(int i=0; i>27; i++)
	{
		cout<<*(ptr+i);
	}
	
	
getch();	
}
