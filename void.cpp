#include <iostream>
#include <math.h>

using namespace std;

 void seperateDigits(int integer, int digitCount, int digit[]){
    for (int i = 0; i < digitCount; i++){
        digit[i] = int(integer / pow(10., double(i)));

        digit[i] = int(digit[i]) % 10;

    }
}


void countDigits(int &ctreven, int &ctrodd, int &ctrzero, int digitCount, int digit[])
{
    for(int i = 0; i < digitCount; i++)
    {
        if(digit[i] == 0){
            ctrzero++;
        }
        else if(digit[i]%2 == 0){
            ctreven++;
        }
        else{
            ctrodd++;
        }
    }
}

int main()
{
    int integer;

    int ctreven = 0;
    int ctrodd = 0;
    int ctrzero = 0;

    cout<<"Enter an integer: ";
    cin >> integer;
    cout << endl;

    int digitCount = int(log10(integer)) + 1;
    int digit[digitCount];

    seperateDigits(integer, digitCount, digit);
    countDigits(ctreven, ctrodd, ctrzero, digitCount, digit);


    cout << "The number of even digits: " << ctreven << endl;
    cout << "The number of odd digits: " << ctrodd << endl;
    cout << "The number of zeros: " << ctrzero << endl;

    cout << endl << endl;

    return 0;
}
