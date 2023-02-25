#include<iostream>
#include<conio.h>
using namespace std;
int main() {

int num,sum1=0,sum2=0,even=0,odd=0,zero=0;

   cout <<"Enter 10 Integer's : ";

for(int i = 1; i<=10; i++)
{
    cin>>num;
    if (num==0){

        zero++;
    }
    else if (num % 2 == 0 ){
        sum1=sum1+num;
        even++;
    }
    else if (num % 2 != 0)
    {

        sum2=sum2+num;
        odd++;
    }
}
    cout<<"There are "<<zero<<" "<<"zeros,";
    cout<<" "<<even<<" "<<"Even Numbers and";
    cout<<" "<<odd<<" "<<"Odd Numbers";
    cout<<endl;

    cout<<"The sum of even number Is : "<<sum1;
    cout<<endl;


    cout<<"The sum of odd number Is : "<<sum2;
    cout<<endl;


    getch();
}
