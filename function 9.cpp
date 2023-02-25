#include<stdio.h>
int additionfunction(int a,int b)
{
	return a+b;
}
int subtractionfunction(int a,int b)
{
	return a-b;
}
int multiplicationfunction(int a,int b)
{
	return a*b;
}
int divisionfunction(int a,int b)
{
	return a/b;
}
int modulusfunction(int a,int b)
{
	 return a%b;
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("addition=%d\n",additionfunction(a,b));
	printf("subtraction=%d\n",subtractionfunction(a,b));
	printf("multiplication=%d\n",multiplicationfunction(a,b));
	printf("division=%d\n",divisionfunction(a,b));
	printf("modulus=%d\n",modulusfunction(a,b));
	return 0;
}
