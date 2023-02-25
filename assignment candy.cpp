#define TAX 0.045
#include<stdio.h>
int main()
{

int JellyBeans,CherryLovers,SourLovers,AlmondJoy,BubbleGum;
float price,subtotal,tax,total;
printf(" Welcome to Alisyia Batrisyia Candies\n\n");
printf("candy type\t Price per packat (RM)\n");
printf("++++++++++\t ++++++++++++++++++++\n");
printf("1)Jelly Beans\t 1.50\n");
printf("2)Cherry Lovers\t 1.30\n");
printf("3)Sour Lovers\t 1.20\n");
printf("4)Almond Joy\t 1.70\n");
printf("5)Bubble Gum\t 1.60\n\n");
printf("\n");
printf("place your order here(no. of packats)\n\n");
printf("Jelly Beans\t :");
scanf("%d",&JellyBeans);
printf("Cherry Lovers\t :");
scanf("%d",&CherryLovers);
printf("Sour Lovers\t :");
scanf("%d",&SourLovers);
printf("Almond Joy\t :");
scanf("%d",&AlmondJoy);
printf("Bubble Gum\t :");
scanf("%d",&BubbleGum); 


printf("++++++++++++++++++++RECEIPT++++++++++++++++++++++++++++++\n\n");
printf("Jelly Beans\t :%d*RM 1.50 = RM %.2f\n",JellyBeans,JellyBeans*1.50);
printf("Cherry Lovers\t :%d*RM 1.30 = RM %.2f\n",CherryLovers,CherryLovers*1.30);
printf("Sour Lovers\t :%d*RM 1.20 = RM %.2f\n",SourLovers,SourLovers*1.20);
printf("Almond Joy\t :%d*RM 1.70 = RM %.2f\n",AlmondJoy,AlmondJoy*1.70);
printf("Bubble Gum\t :%d*RM 1.60 = RM %.2f\n\n",BubbleGum,BubbleGum*1.60);

subtotal=JellyBeans*1.50+CherryLovers*1.30+SourLovers*1.20+AlmondJoy*1.70+BubbleGum*1.60;
printf("subtotal amount :RM %.2f\n",subtotal);
tax=(subtotal*TAX); 
printf("Government tax surcharge :RM %.2f\n",tax);
total=subtotal+tax;
printf("after tax total amount :RM %.2f\n",total);

return 0;
}
