#include<stdio.h>
int main()
{
	int item_quantity=10,profit;
	float unit_price=9.50;
	float selling_price=10.50;
	printf("enter item quantity:");
	scanf("%d",&item_quantity);
	printf("enter unit price:");
	scanf("%f",&unit_price);
	printf("enter selling price:");
	scanf("%f",&selling_price);
	profit=(unit_price+selling_price)/2;
	printf("the profit is: %d\n",profit);
	return 0;
	
}

