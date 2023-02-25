#include<iostream>
#define rows 3
#define cols 3
using namespace std;
int main()
{
    int i,j;
    int mynums[rows][cols];
    cout<<"The matrix is:\n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cin>>mynums[i][j];
        }
          
    }
    
    cout<<"\nTranspose is:\n";
    
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
	{
		
        cout<<mynums[j][i];
    }
        cout<<endl;
    }
    
    return  0;  
}
