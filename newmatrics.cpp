/* 1.Tanveer Mahmood Hasan-1725413
   2.MD Raisul Islam-1725501
   */

#include <iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
const int row1= 3 ,row2=2, col=2;
int math1[row1][col];
int math2[row2][col];
int math3[row1][col];
int math4[col][row1];
int sum;

void multMatrix(int math1[row1][col], int math2[row2][col] );
int calcTotal(int math3[row1][col]);
int main()
{

	cout<<"Enter first matrix element M (3*2) : "<<endl<<endl;
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 2 ; j++){
			cin>>*(math1[i] + j);
		}
	}

	cout<<"Enter second matrix element N (2*2) : "<<endl<<endl;
	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 2 ; j++){
			cin>>*(math2[i] + j);
		}
	}

	multMatrix(math1, math2);
	sum= calcTotal(math3);
	cout <<endl<<endl<< "The Sum of element is : "<<sum;


getch();
}

void multMatrix(int math1 [row1][col], int math2[row2][col])
{
 for(int a = 0; a< 3; ++a)
        for(int b = 0; b < 2; ++b)
            for(int c = 0; c < 2; ++c)
            {
                *(math3[a]+b) += (*(math1[a]+c)) * (*(math2[c]+b));
            }
    cout<<endl;
    cout<<"The metrix M x N is : "<<endl<<endl;
    for(int a = 0 ; a < 3 ; a++){
    	cout<<right<<setw(6)<<"|";
		for(int b = 0 ; b < 2 ; b++){
			cout<<right<<setw(6)<<*(math3[a] + b) ;
		}
		cout<<"   |"<<endl;
	}
}

int calcTotal(int math3[row1][col])
{	sum=0;
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 2 ; j++){
			sum += *(math3[i] + j) ;
		}
	}

	return sum;
}


