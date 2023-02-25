/*  1.Tanveer Mahmood Hasan-1725413
    2.Md.Raisul Islam-1725501
*/
#include<iostream>

using namespace std;

int num,sum1=0,sum2=0,even=0,odd=0,zero=0;

void countFreq(int x){
    if(x==0){
    zero++;
    }else if(x %2 ==0){
    even++;
    }else{
    odd++;
    }
}
void sumOdd(int x){
    sum1 += num;

}
void sumEven(int y){
    sum2 += num;

}



int main()
{
    cout <<"Enter 10 Integer's : ";

    for(int i = 1; i<=10; i++)
  {
    cin>>num;
    if (num==0){

        countFreq(num);
    }
    else if (num % 2 == 0 ){
        countFreq(num);
        sumOdd(num);

    }
    else if (num % 2 != 0)
    {
        countFreq(num);
        sumEven(num);

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




 return 0;
}
