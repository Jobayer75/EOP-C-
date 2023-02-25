#include<iostream>
using namespace std;

int main()
{
   int i = 0, j = 10, n = 0;

   while (i < j)
   {
	i++;
       j--;
       n++;
       cout << i << " " << j << " " << n << "\n";
   }
   return 0;
}
