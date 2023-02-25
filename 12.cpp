#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int response[30],frequency[5],x;
	for(x=0;x<10;x++)
	{
	
	    cout<<"Enter your scale:";
		cin>>response[x];
		
		if(response[x]==1)
		
		 frequency[0]++;
		 
		 else if(response[x]==2)
		 
		 frequency[1]++;
		
		else  if(response[x]==3)
		
		 frequency[2]++;
	
	   else if(response[x]==4)
	   
		 frequency[3]++;
		 
		else if  (response[x]==5)
		 frequency[4]++;
		 
	}
	cout<<"Response\tFrequency\n";
	for(x=0;x<5;x++)
	 cout<<x+1<<"\t"<<"\t"<<frequency[x]<<endl;
	 return 0;
}



