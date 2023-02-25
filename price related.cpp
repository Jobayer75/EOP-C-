#include<stdio.h>
int main()
{
	float no_meters;
	float price;
	float discount,normal_price,discount_price;
	printf("welcome to ABC textile\n\n:");
	printf("enter number of meters:");
	scanf("%f",&no_meters);
	printf("enter price (RM) per meter :");
	scanf("%f",&price);
	normal_price=no_meters*price;
	discount=0.25*normal_price;
	discount_price=normal_price-discount;
	printf("the normal price for %.2f\n",no_meters);   
    printf("meters of cotton cloth is RM %.2f \n",normal_price);
	printf("the price after discount is %.2f\n",discount_price);
	return 0;
}
