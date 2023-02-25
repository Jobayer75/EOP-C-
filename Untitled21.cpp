#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int l = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<l; i++){
        cin >> arr[i];
    }

    for(int i=0; i<l; i++){
        cout << arr[i] << endl;
    }

}

