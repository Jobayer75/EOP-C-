#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double a, double b) {
    double ans = sqrt(a * a + b * b);
    return ans;
}

int main() {
    double leg1, leg2;
    cout << "This program prints the length of the hypotenuse of a right triangle" << endl;
    cout << "Enter the length of the first leg  : ";
    cin >> leg1;
    cout << "Enter the length of the second leg : ";
    cin >> leg2;
    cout << "Length of hypotenuse               : " << hypotenuse(leg1, leg2) << endl;
    return 0;
}
