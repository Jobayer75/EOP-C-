#include <iostream>
using namespace std;

struct WeatherData
{
    double temperature;
    int windVelocity;
    double rainfall;
};

int main() {
  
    const int num = 3;
    WeatherData W[num];
    
    W[1].temperature = 29.5;
    W[1].windVelocity = 231;
    W[1].rainfall  = 110.3;
    
    W[2] = {28.84,200,132.6}; //assuming 28.8.4 is 28.84 .and assigning to record 3.
    
    
    return 0;
}
