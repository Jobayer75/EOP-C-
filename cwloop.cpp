#include<iostream>

using namespace std;

int main()
{
    float prev=22495, gal, mpg, mil;
    int i=0;

    while(true)
    {
        cout<<"enter mileage : "<<endl;
        cin>>mil;
          cout<<"enter gallons : "<<endl;
        cin>>gal;
        mpg=(mil-prev)/gal;
        cout<<"MPG is "<<mpg<<endl;
        prev=mil;
        i++;
        if(i==8)
            break;
        else
            continue;
    }




    return 0;
}
