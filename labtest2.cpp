#include <iostream>
#include <cstdlib>
#include <string>
 
using namespace std;
 
int main()
{
   string filename = employee.dat;
string name;
double salary;
 
inFile.open(filename);
 
if(inFile.fail())
{
   cout << "The file is not successfully opened"
        << endl;
   exit(1);
}
 
inFile << name << salary;
while (inFile.eof())
{
   cout << name << ' ' << salary << endl;
   cin >> name >> salary;
}
inFile.close();
return 0;
}
