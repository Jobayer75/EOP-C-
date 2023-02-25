#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDie() {
    
    int x = 1 + rand() % 6;
    return x;
}

int main() {
    srand(time(NULL));
    for (int i = 1; i <= 6; ++i) {
        
        cout << "Roll Die #" << i << ": " << rollDie() << endl;
    }
    return 0;
}
