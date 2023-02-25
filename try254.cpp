#include <iostream>
using namespace std;

void odd(int);
void even(int);

int main ()
{
int num;
cout<<"Enter any number";
cin>>num;
even(num);
return 0;
}

void even(int a )
{ 
if ( a%2==0)
cout<<"\nEven number";
else odd(a);
}

void odd(int)
{ 
cout<<"\nOdd number";
}
