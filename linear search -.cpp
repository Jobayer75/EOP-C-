// Jobayer 1731833
#include<iostream>
#define SIZE 10
using namespace std;

int main() {

int array[SIZE], key,i;
 for(int j=0;j<SIZE;j++){
 cout<<"Enter "<<j<<" Element: ";
 cin>>array[j];
 }

 for(int a=0;a<SIZE;a++){
    cout<<"array[ "<<a<<" ]  =  ";
    cout<<array[a]<<endl;
 }

 cout<<"Enter Key To Search  in Array";
 cin>>key;

   for(i=0;i<SIZE;i++){
      if(key==array[i]){
  cout<<"Key Found At Index Number :  "<<i<<endl;
  break;
    }
 }


if(i != SIZE){
cout<<"KEY FOUND at index :  "<<i;
}
else{
cout<<"KEY NOT FOUND in Array  ";
}
   return 0;
}
