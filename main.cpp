
#include<iostream>
using namespace std;
int main()
{

    int x,y,z;//if x=1 , then u r in malaysia and if x=2 yiu r not in malaysia.
    cout<< "select weather u r in malaysia or not? press 1 for in malaysa or 2 for not in malaysia"<< endl;
    cin>>x;
    cout<<endl;
    switch(x)
    {

        case 1:cout<<"In malaysia"<<endl ;
        cout<<"press 1 for west malaysia or 2 for not in west malaysia"<<endl;
        cin>>y;
               switch(y){
               

                   case 1: cout<<"Set Shipping cost = RM 7"<<endl;break;
                   case 2:cout<<"set shpping cost RM =10"<<endl;break;
               
}

        case 2: cout<<"not in malayisa"<<endl; 
                 cout<<"Set shipping cost =RM30"<<endl;break;
    }

    return 0;

}
