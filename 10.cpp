#define JellyBeans 1.50                                                     //here constant is being defined                                  
#define CherryLovers 1.30
#define SourLovers 1.20
#define AlmondJoy 1.70
#define BubbleGum 1.60
#define TaxRate 0.045
#include<stdio.h>
int main()
{
	
int Jelly_Beans,Cherry_Lovers,Sour_Lovers,Almond_Joy,Bubble_Gum;               //this line shows 5 types odf candies intiger value
float price,subtotal,tax,total;                                                //this line shows float value because price is not intiger
																				
printf("     Welcome to Alisyia Batrisyia Candies\n\n");      
printf("candy type              Price per packat  (RM)\n");
printf("++++++++++              ++++++++++++++++++++++\n");
printf("1)Jelly Beans                  1.50\n");
printf("2)Cherry Lovers                1.30\n");
printf("3)Sour Lovers                  1.20\n");
printf("4)Almond Joy                   1.70\n");
printf("5)Bubble Gum                   1.60\n\n");
printf("\n");                                                                      //here use new line symbol to take new line 

printf("place your order here(no. of packats)\n\n");                               //this is processing to take input of 5 types of candies no of packats
printf("Jelly Beans             :");                      
scanf("%d",&Jelly_Beans);
printf("Cherry Lovers           :");
scanf("%d",&Cherry_Lovers);
printf("Sour Lovers             :");
scanf("%d",&Sour_Lovers);
printf("Almond Joy              :");
scanf("%d",&Almond_Joy);
printf("Bubble Gum              :");
scanf("%d",&Bubble_Gum);  
printf("\n");


printf("++++++++++++++++++++RECEIPT++++++++++++++++++++++++++++++\n\n");                       //this is printing a word receipt  of 5 types of candies price  
printf("Jelly Beans       :%d*RM 1.50 = RM %.2f\n",Jelly_Beans,Jelly_Beans*JellyBeans);        
printf("Cherry Lovers     :%d*RM 1.30 = RM %.2f\n",Cherry_Lovers,Cherry_Lovers*CherryLovers);       
printf("Sour Lovers       :%d*RM 1.20 = RM %.2f\n",Sour_Lovers,Sour_Lovers*SourLovers);
printf("Almond Joy        :%d*RM 1.70 = RM %.2f\n",Almond_Joy,Almond_Joy*AlmondJoy);
printf("Bubble Gum        :%d*RM 1.60 = RM %.2f\n",Bubble_Gum,Bubble_Gum*BubbleGum);

subtotal=Jelly_Beans*JellyBeans+Cherry_Lovers*CherryLovers+Sour_Lovers*SourLovers+Almond_Joy*AlmondJoy+Bubble_Gum*BubbleGum;                                                                                                                         
printf("subtotal amount           :RM %.2f\n",subtotal);                                     //this is printing subtotal value of 5 types of candies
tax=subtotal*TaxRate;
printf("Government tax surcharge  :RM %.2f\n",tax);                                           //this is printing tax that means combined sub total and tax rate
total=subtotal+tax;
printf("after tax total amount    :RM %.2f\n",total);                                      /*finally this one calculating  after tax total amount after finishing
                                                                                           all calculating such as subtotal and tax   then print total amount*/  

return 0;       //  this is ending part of program
}


