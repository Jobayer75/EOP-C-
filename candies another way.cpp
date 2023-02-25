#define tax 0.045 
#define jelly_beans  1.50
#define cherry_lover 1.30
#define sour_lovers  1.20
#define almond_joy   1.70
#define bubble_gum   1.60
#include <stdio.h>

int main()
{
  float subtotal_amount , govermant_surcharg , after_tax_total_amount ;    
  float total1 , total2 , total3 , total4 , total5 ;
  int packet1 , packet2 ,packet3 ,packet4 ,packet5 ;
 printf("pleas inter how many packets u want in ordar jelly_beans,cherry_lover,sour_lovers,almond_joy,bubble_gum");
 scanf("%d%d%d%d%d",&packet1 ,&packet2 ,&packet3 ,&packet4 ,&packet5);
 
 printf(" \t\twelcom to alisyia batrisyia candies\n\n");
 printf("\tcandy type\tprice per packet(RM)\n");
 printf("\t+++++++++\t\t+++++++++++\n");
 printf("\t1)jelly_beans          1.50\n");
 printf("\t2)cherry_lover         1.30\n");
 printf("\t3)sour_lovers          1.20\n");
 printf("\t4)almond_joy           1.70\n");
 printf("\t5)bubble_gum           1.60\n");
   
 printf("place your ordar here(no.of packets)\n");  
   
   
  printf(" jelly_beans               %d\n",packet1);
  printf(" cherry_lover              %d\n",packet2);
  printf(" sour_lovers               %d\n",packet3);
  printf(" almond_joy                %d\n",packet4);
  printf(" bubble_gum                %d\n\n",packet5);
  
  printf("++++++++++++receipt+++++++++++++\n\n");

  printf("jelly_beans   :%d x rm %.2f = %.2f\n",packet1 ,jelly_beans ,total1 = packet1 * jelly_beans);
  printf("cherry_lover  :%d x rm %.2f = %.2f\n",packet2 ,cherry_lover ,total2 = packet2 * cherry_lover);
  printf("sour_lovers   :%d x rm %.2f = %.2f\n",packet3 ,sour_lovers ,total3 = packet3 * sour_lovers);
  printf("almond_joy    :%d x rm %.2f = %.2f\n",packet4 ,almond_joy ,total4 = packet4 * almond_joy);
  printf("bubble_gum    :%d x rm %.2f = %.2f\n\n",packet5 ,bubble_gum ,total5 = packet5 * bubble_gum);
   
   
   printf("subtotal amount               :RM %.2f\n",subtotal_amount=total1+total2+total3+total4+total5);
   printf("govermant tax surchage        :RM  %.2f\n",govermant_surcharg=subtotal_amount*tax);
   printf("after tax total amount        :RM %.2f\n",after_tax_total_amount=govermant_surcharg+subtotal_amount);
   
   
   return 0;
}
