#include<iostream>
#include<math.h>
#define PI 3.1415
using namespace std;
int diameter(int radius);
float circumference(float radius);
float area(float radius);

int main()
{
 int dia,radius;
  float cir,ar;
 cout<<"enter radius of curcle: ";
 scanf("%d",&radius);
 dia=diameter(radius);
 cir=circumference(radius);
 ar=area(radius);
 cout<<"the diameter is "<<dia<<endl;
 cout<<"the circumference is "<<cir<<endl;
 cout<<"the area is "<<ar;
 return 0;
}

int  diameter(int radius)
{
	int sum;
	sum=(2*radius);
	return sum;
}

float circumference(float radius)
{
	int sum;
	sum=(2*PI*radius);
	return sum;
}

float area (float radius)
{
	int sum;
	sum=(PI*radius*radius);
	return sum;
}

