#include <iostream>

using namespace std;

int main()

{
    int a, b, a2, a3, b2, b3, count1 = 0, count2 = 0;

    cout << "Enter two integers : ";
    cin >> a >> b;

    a2 = a;
    a3 = a;
    b2 = b;
    b3 = b;

    if(a < b) {
        for( ; a <= b ; a++) {
            if(a % 3 == 0) {
                count1++;
            }

        }

        for( ; a2 <= b ; a2++) {
            if(a2 % 5 == 0) {
                count2++;
            }
        }

        cout << "Multiples of 3 between " << a3 << " and " << b << ": " << count1 << endl;
        cout << "Multiples of 5 between " << a3 << " and " << b << ": " << count2 << endl;
    }
    else{
        for( ; b <= a ; b++) {
            if(b % 3 == 0) {
                count1++;
            }

        }

        for( ; b2 <= a ; b2++) {
            if(b2 % 5 == 0) {
                count2++;
            }
        }

        cout << "Multiples of 3 between " << a << " and " << b3 << ": " << count1 << endl;
        cout << "Multiples of 5 between " << a << " and " << b3 << ": " << count2 << endl;
    }

    return 0;
}
