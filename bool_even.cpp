#include <iostream>
using namespace std;

bool isEven(int n) {
    if (n % 2 == 0) 
        return true;
    else 
        return false;
}

int main() {
    cout << "Enter an integer : ";
    int n;
    cin >> n;
    if (isEven(n)) 
        cout << n << " is an even number" << endl;
    else 
        cout << n << " is an odd number" << endl;
    return 0;
}
