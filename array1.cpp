#include <iostream>
using namespace std;

const int size = 5;
int i,grades[size];

void enterGrade(int[size]);
void dispGrade(int[size]);

int main()
{
    enterGrade(grades);
    dispGrade(grades);
return 0;
}
void enterGrade(int grades[size]){

    for (i = 0; i < size; i++)
    {
	cout << "Enter a grade: ";
	cin >> grades[i];
    }
    cout << endl;}

void dispGrade(int grades[size]){
    for (i = 0; i < size; i++)
	cout << "grade [" << i << "] is " << grades[i] << endl;
}
