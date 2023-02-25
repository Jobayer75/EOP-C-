//Tanveer Mahmood Hasan-1725413
#include <iostream>
#include<conio.h>
using namespace std;

int main ()
{


int num;

int factorial =1;
cout<<"Enter a number : ";
cin>>num;

for (int i=1; i<=num;i++)

{

	factorial*=i;

}

cout<<"Factorial of "<<num<<" = "<<factorial;









getch();
}
