#include<iostream>
#include<iomanip>
using namespace std;
#define row_1 3
#define row_2 2
#define col_1 2
#define col_2 3
double P[row_1][col_1],Q[row_2][col_2],mult[row_1][col_2];
void mulitMatrix(double P[][col_1],double Q[][col_2],double mult[row_1][col_2]);
double findDeterm(double mult[row_1][col_2]);
int main()
{
	cout << "Enter values for array P:\n";
	for(int i=0; i<row_1; i++)
	{
		for(int j=0; j<col_1; j++)
		{
			cin >> *(*(P+i)+j);
		}
	}
	cout << endl;
	cout << "Enter values for array Q:\n";
	for(int i=0; i<row_2; i++)
	{
		for(int j=0; j<col_2; j++)
		{
			cin >> *(*(Q+i)+j);
		}
	}
	cout << endl;

    cout << "The result of matrix PxQ: \n";
    mulitMatrix(P,Q,mult);
    cout << "Determinant: " << findDeterm(mult) << endl;


	return 0;
}
void mulitMatrix(double P[row_1][col_1],double Q[row_2][col_2],double mult[row_1][col_2])
{
    for(int i=0; i<row_1; i++)
	{
		for(int j=0; j<col_2; j++)
		{
			*(*(mult+i)+j) = 0;
			for(int k=0; k<col_1; k++)
			{
				*(*(mult+i)+j) += *(*(P+i)+k) * *(*(Q+k)+j);
			}
		}
	}
	for(int i=0; i<row_1; i++){
        for(int j=0; j<col_2; j++){
            cout << *(*(mult+i)+j) << " ";
        }
        cout << endl;
    }
    cout << endl;
}
double findDeterm(double mult[row_1][col_2])
{
    if(row_1==2 && col_2==2){
        return (*(*(mult+0)+0) * *(*(mult+1)+1) - *(*(mult+0)+1) * *(*(mult+1)+0));
    }
    else return (*(*(mult+0)+0) * *(*(mult+1)+1) * *(*(mult+2)+2) - *(*(mult+2)+1) * *(*(mult+1)+2)) - (*(*(mult+0)+1) * *(*(mult+1)+0) * *(*(mult+2)+2) - *(*(mult+2)+0) * *(*(mult+1)+2)) + (*(*(mult+0)+2) * *(*(mult+1)+0) * *(*(mult+2)+1) - *(*(mult+2)+0) * *(*(mult+1)+1));

}






















