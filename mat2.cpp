#include<iostream>
using namespace std;
///void mult(int a[][10],int b[][10],int m[][10],int row,int col);
int main()
{
	int a[10][10],b[10][10],m[10][10],row,col;
    int det=0;
	cin >> row >> col;

	cout << "Enter elements of Matrix A:\n";
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "Enter elements of Matrix B:\n";
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cin >> b[i][j];
		}
	}
	// multiply
    ///determinant
    /// inverse
    int temp1,temp2;

    if(row==2 && col==2)
    {
        temp1 = a[0][0];
        a[0][0] = a[1][1];
        a[1][1] = temp1;

        temp2 = -a[0][1];
        a[0][1] = -a[1][0];
        a[1][0] = temp2;
    }

    for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}

