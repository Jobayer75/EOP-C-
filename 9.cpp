#include<stdio.h>
void capture()
{
	int num;
    printf("enter number of tickets:");
	scanf("%d",&num);
	return ;
}
float ticketpay()
{
  int num;
  float total_price,ticket_price;
  printf("number of tickets:");
  scanf("%d",&num);
  total_price=num*15.0;
    printf("total price : %.2f\n",total_price);
  return total_price;
  
}
float CalcDiscount()
{
	float discount;
	float total_price;
	discount=total_price*0.05;
    printf("Discount :%.2f\n",discount);
    return discount;
}
float Calcnetpay()
{
	float netpay,total_price;
	float discount;
	netpay=total_price-discount;
	printf("Nettpay :%.2f\n",netpay);
	return netpay;
	
}

int main()
{
	int x,num;
	float total_price,ticket_price,discount;
    printf("Welcome to badhon ticket counter\n");
    printf("PAYMENT INFORMATION\n");
    capture();
	ticketpay();
	CalcDiscount();
	Calcnetpay();
	return 0;
}
