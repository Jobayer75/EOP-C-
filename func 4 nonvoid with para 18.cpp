#include<stdio.h>
#define DISCOUNT 0.05
#define PRICE 15.0
int capture()
{
	int num;
    printf("Enter number of tickets:");
	scanf("%d",&num);
	printf("\n");
	return num;
}
float ticketpay(int num)
{
  	float total_price,ticket_price;
  	printf("Number of tickets:");
	scanf("%d",&num);
  	total_price=num*PRICE;
	//printf("total price : %.2f\n",total_price);                         this one print total
 	return total_price;
  
}
float CalcDiscount(float total_price)
{
	float discount;
	discount=total_price*DISCOUNT;
    //printf("Discount :%.2f\n",discount);                                 this one print discount
    return discount;
}
float Calcnetpay(float total_price,float discount)
{
	float netpay;
	netpay=total_price-discount;
	//printf("Nettpay :%.2f\n",netpay);                                     this one print netpay
	return netpay;
	
}
void display(float total_price,float discount,float netpay)                //this one one kind of function to get print all value 
{
	printf("total price :%7.2f\n",total_price);
	printf("Discount    :%7.2f\n",discount);
	printf("Nettpay     :%7.2f\n",netpay);
}
int main()
{
	int x,num;
	float total_price,ticket_price,discount,netpay;
    printf("**********************************Welcome to BADHON ticket counter****************\n\n ");
    num=capture();   
	printf("PAYMENT INFORMATION\n");                                                    // this one using by  function call for 5 items
	total_price=ticketpay(num);
	discount=CalcDiscount(total_price);
	netpay=Calcnetpay(total_price,discount);
	display(total_price,discount,netpay);
	return 0;
}
