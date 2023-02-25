#include <iostream>
using namespace std;

const int size = 5;
int i,nums[size];

void enterNum(int[size]);
int findmax(int[size]);

int main()
{ 	int maximum;
    enterNum(nums);
    maximum = findmax(nums);
    cout <<"The large value is : "<<findmax(nums);
    cout <<endl;
return 0;
}
void enterNum(int nums[size]){

    for (i = 0; i < size; i++)
    {
	cout << "Enter a Num: ";
	cin >> nums[i];
    }
    cout << endl;
	}

   int findmax(int nums[size]){
   	int k, max = nums[0];
    for ( k = 1; k < size; k++){
	
	if (max < nums[k]){
	
	max = nums[k];}
return max;

}
}
