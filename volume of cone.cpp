// Tanveer Mahmood Hasan-1725413

#include<iostream>
#include<conio.h>
using namespace std;
void volume_of_cone(double height, double radious)
{   const double pi=3.1416;
    double volume=(height*radious*radious*pi)/3;
    cout <<"volume of cone is: " <<volume;
}

int main()
{
	double height, radious;

	cout<<"Enter the height : ";
	cin>> height ;
    cout<<"Enter the radious : ";
	cin>> radious ;

    volume_of_cone(height,radious);


getch();
}
