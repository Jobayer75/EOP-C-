#include <iostream>
using namespace std;

void reverseDigit()
{
    signed long long int n, m, reverseDigit=0, i;

    cout<<"Enter an integer: ";
    cin>>n;
    m = n;


    while(n!=0)
      {
        i=n%10;
        reverseDigit=reverseDigit*10+i;
        n/=10;
      }

    cout << m <<" with digits reversed= "<<reverseDigit<<", leading zeros if any are not shown"<<endl;

}

int main()
{
	reverseDigit();
	return 0;

}
