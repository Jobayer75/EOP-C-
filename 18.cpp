#include <iostream>
using namespace std;
int main()
{
    int list[8]={12,23,5,100,3,-120,89,30};
    int i, max, min, size;                                                       
    cout<<"Enter elements in the array:\n";
    for(i=0; i<8; i++)
    {
        cout<<list[i]<<endl;
    }                                                         
    max = list[0];
    min=list[0];                                                                    
    for(i=1; i<8; i++)
    {
                                                
        if(list[i] > max)
        {
            max = list[i];
        }
        if(list[i] < min)
        {
            min = list[i];
        }
    }

    cout<<"Maximum element = "<<max<<endl;
    cout<<"Minimum element = "<<min;

    return 0;
}
