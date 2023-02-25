#include <iostream>
using namespace std;

void countDigits(long long int n) {
    int zeroes = 0;
    int evens = 0;
    int odds = 0;
    while (n != 0) {
        int dig = n % 10;
        n = n / 10;
        
        if (dig == 0) {
            zeroes++;
        }
        else if (dig % 2 == 0) {
            evens++;
        }
        else {
            odds++;
        }
    }
    cout << "Number of 0s: " << zeroes << endl;
    cout << "Number of even digits: " << evens << endl;
    cout << "Number of odd digits: " <<  odds << endl;
}

int main() {
    cout << "1234567890" << endl;
    countDigits(1234567890);
    return 0;
}
