#include<stdio.h>
int main()
{
	int quantity=2;
	float price=2.75,total;
	printf("enter quantity and price:");
	scanf("%d%f",&quantity,&price);
	total=quantity*price;
	printf("the total price is %d * RM %.2f= %.2f\n",quantity,price,total);
	return 0;
	
}
