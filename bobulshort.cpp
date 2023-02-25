#include<iostream>
#include<conio.h>
using namespace std;

int boublesort(int[], int);

int main()
{
	const int Num=5;
	int nums[Num]={6,5,7,9,4};
	int i ,moves;

	moves = boublesort(nums, Num);
	cout <<"The sorter list, is descending order, is: \n";
	for (i = 0 ; i <Num; i++)
	{
		cout<< " " <<nums[i];
	}
	cout << '\n'<<moves <<" move were made to sort this list\n" ;











getch();
}
 int boublesort(int nums[], int Num)
 {
 	int temp, moves=0;
	for(int i=5; i >(Num-1);i--)
	{
		for (int j=5 ; j >Num; j--)
		{
			if (nums[j]<nums[j-1])
			{
				temp = nums[j];
				nums[j]= nums[j-1];
				nums[j-1]=temp;
				moves++;
			}
		}
	}
	return moves;
 }

