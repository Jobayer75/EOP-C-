#include <iostream>

using namespace std;

//2 void pointer_use(int *Array){
	
	//2 int i;
	//2 for (i = 0; i < 5; i++){
	//2 cout << Array[i] << endl;
	//2 }
//2 }

 
 int Change(int *px){
	*px = 26;
	
}
//0int main()
//0{
  //0  const int ARRAYSIZE = 5;

  //0  int i, grade[ARRAYSIZE] = {98,87,92,79,85};

//0	int *grades = &grade[0];
 //0   for (i=0; i < ARRAYSIZE;  i++)
  //0      cout << "\nElement " << i << " is " << *(grades + i);
 //0   cout << endl;
//0    return 0;
//0 }
int main (){

 int x = 10;

Change(&x);
 cout << x ;

 //2 int Array[5] = {10,20,30,40,50};

 //2 pointer_use(Array);

 //for(int i=0; i < 5; i++){
 //	cout << Array[i]  <<endl;
 //}

//1 int *p;
//1 p = &Array[0];

//1	cout << p << endl;
 //1   cout << *p << endl;
//1    cout << *(p+1) << endl;

	return 0;
}

