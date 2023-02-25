#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
struct point {
    double x;
    double y;
};
double calcArea(point p[]){
    return abs(((p[0].x*(p[1].y-p[2].y)) + (p[1].x*(p[2].y-p[0].y)) + (p[2].x*(p[0].y-p[1].y)))/2);
}
const int vertex = 3;;
int main(){
    point p[vertex];
    for(int i=0; i<vertex; i++){
        cout << "Enter coordinates of vertex #" << i+1 << endl;
        cout << "x-coordinate: ";
        cin >> p[i].x;
        cout << "y-coordinate: ";
        cin >> p[i].y;
    }
    double area = calcArea(p);
    cout << "Area of the triangle = " << area << endl;
    getch();
}
