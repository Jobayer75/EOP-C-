//Take order by using different function
//take quentity input from the user as a string put it in a array(global) against product code
//continue the process untill the customer chose check_out
//use all array that contain product code inside check_out function
//compare global array with array in checkout 
//find a way to print the recipient
//End the program
//Main menu will display check available products and Start Shopping Now



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TaxRate.005
int i=0;
char name[15],phn[12];
float total,sub_total,Tax;
char male_products[50][2][6];
char female_products[50][2][6];
char baby_products[50][2][6];

char products_male[10][5][40]=	{"0","Nike  ","39","shoes   ","30",                                //[0][0-4]
								 "1","Bata  ","40","shoes   ","32",
								 "2","Apex  ","41","shoes   ","35",
								 "3","Apex  ","42","shoes   ","30",
								 "4","Polo  ","M ","t-shirts","32",
								 "5","Polo  ","L ","t-shirts","33",
								 "6","Polo  ","XL","t-shirts","30",
								 "7","Adidas","38","trousers","32",
								 "8","Adidas","40","trousers","35",
								 "9","Adidas","42","trousers","40"
								};

char products_female[10][5][40]={"10","Nike  ","M  ","shirts  ","30",                             //[0][0-4]
								 "11","Nike  ","L  ","shirts  ","32",
								 "12","Nike  ","XXL","shirts  ","35",
								 "13","Bata  ","39 ","shoes   ","30",
								 "14","Apex  ","40 ","shoes   ","32",
								 "15","Apex  ","41 ","shoes   ","33",
								 "16","Adidas","42 ","shoes   ","30",
								 "17","Adidas","37 ","trousers","32",
								 "18","Adidas","38 ","trousers","35",
								 "19","Adidas","40 ","trousers","40"
								};
								
char products_baby[10][5][40]= {"20","Nike  ","15","shoes   ","30",                              //[0][0-4]
								"21","Nike  ","16","shoes   ","32",
								"22","Nike  ","17","shoes   ","35",
								"23","Polo  ","M ","shirts  ","30",
								"24","Polo  ","L ","shirts  ","32",
								"25","Polo  ","XL","shirts  ","33",
								"26","Adidas","28","trousers","30",
								"27","Adidas","29","trousers","32",
								"28","Adidas","30","trousers","35",
								"29","Adidas","34","trousers","40"
							   };

void male_items(void);
void female_items(void);
void baby_items(void);
void check_out(void);
void catalog(void);
void menu(void);

int main(void)
{
	int choice,category,i,j;


    printf("\n\n");
    printf("                                ~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`                                            \n");

    printf("      ~~~                                                                                                  ~~~\n");

    printf("      ~~~                        Welcome to daraz online sports shop                                       ~~~\n");

    printf("      ~~~                                                                                                  ~~~\n");

    printf("                                ~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`~`\n");

	printf("\n\n1.Check available products\n2.Start Shopping Now\n\nEnter Your choice:");
	scanf("%d", &choice);
		if(choice==1)
	{
		
		catalog();
	}
	else
	
	menu();
		
	
	return 0;

}

void catalog(void)
{
	int category,i,j,n;
	printf("\n\n1.Male\n2.Female\n3.Baby\n");
		printf("\n\nPlease select a category:");
			
                                                            	/*
	                                                               printf("1.Male\n2.Female\n3.Baby\n");
                                                                  	printf("\n\nPlease select a category:");*/
	
	scanf("%d", &category);
	switch(category)
	{
		
		case 1:
			printf("\n\nProduct Code\t\tProduct Name\t\t\tBrand\t\tSize\t\tPrice\n\n");
			for(i=0;i<10;i++)
			{
				printf("%s\t\t\t%s\t\t\t%s\t\t%s\t\t$%s\n",products_male[i][0],products_male[i][3],products_male[i][1],products_male[i][2],products_male[i][4]);	
			}
			break;
		case 2: 
			printf("\n\nProduct Code\t\tProduct Name\t\t\tBrand\t\tSize\t\tPrice\n\n");
			for(i=0;i<10;i++)
			{
					
				printf("%s\t\t\t%s\t\t\t%s\t\t%s\t\t$%s\n",products_female[i][0],products_female[i][3],products_female[i][1],products_female[i][2],products_female[i][4]);	
			}
			break;
		case 3: 
			printf("\n\nProduct Code\t\tProduct Name\t\t\tBrand\t\tSize\t\tPrice\n\n");
			for(i=0;i<10;i++)
			{
				printf("%s\t\t\t%s\t\t\t%s\t\t%s\t\t$%s\n",products_baby[i][0],products_baby[i][3],products_baby[i][1],products_baby[i][2],products_baby[i][4]);
			}
			break;
	}
	printf("\n\nPress 1 to go to main menu:");
	scanf("%d", &n);
	if(n==1)
	{
		system("cls");
		main();
	}
		
}
void menu(void)
{
	system("cls");
	int choice;
	printf("\n\n1.Male\n2.Female\n3.Baby\n");
	printf("\n\nPlease select a category:");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			male_items();
			break;
		case 2: 
			female_items();
			break;
		case 3: 
			baby_items();
			break;
	}
	
}
void male_items(void)
{
	system("cls");
	int choice;
	char ch = 'y';
	while(ch != 'n' && ch != 'N' && i<=50)
	{
		printf("\n\nPlease enter product code and quantity:");
		scanf("%s%s",male_products[i][0],male_products[i][1]);
		i++;
		printf("Do you want to continue(y/n):");
		fflush(stdin);
		scanf("%c", &ch);
	}
	printf("\n\nPress 1 to go to main menu and 0 to go to Check out:");                      // to take choise menu or checkout 
	scanf("%d", &choice);
	if(choice==0)
	{
		system("cls");
		check_out();
	}
	else
	{
		system("cls");
		main();
	}
}

void female_items(void)
{
	system("cls");
	int choice;
	char ch = 'y';
	while(ch != 'n' && ch != 'N' && i<=50)
	{
		printf("\n\nPlease enter product code and quantity:");                       //to take input from user product code and quantity
		scanf("%s%s",female_products[i][0],female_products[i][1]);         
		i++;
		printf("Do you want to continue(y/n):");
		fflush(stdin);
		scanf("%c", &ch);
	}
	printf("\n\nPress 1 to go to main menu and 0 to go to Check out:");           //here use if else to confirm go to main menu or checkout
	scanf("%d", &choice);                                                  
	if(choice==0)
	{
		system("cls");
		check_out();
	}
	else
	{
		system("cls");
		main();
	}
}

void baby_items(void)
{
	system("cls");
	int choice;
	char ch = 'y';
	while(ch != 'n' && ch != 'N' && i<=50)
	{
		printf("\n\nPlease enter product code and quantity:");
		scanf("%s%s",baby_products[i][0],baby_products[i][1]);
		i++;
		printf("Do you want to buy more(y/n):");                                // to ask customer you want to buy more or not
		fflush(stdin);
		scanf("%c", &ch);
	}
	printf("\n\nPress 1 to go to main menu and 0 to go to Check out:");
	scanf("%d", &choice);
	if(choice==0)
	{
		system("cls");
		check_out();
	}
	else
	{
		system("cls");
		main();
	}
}

void check_out(void)
{
	int j,k,l;
	float total=0.0;
	
                                                 	//[i][0] is product code, [i][1] is Brand, [i][2] is Size, [i][3] is Price
	
									
	
	
	printf("\n\nProduct Code\t\tProduct Name\t\t\tBrand\t\tSize\t\tPrice\t\tQuintity\n\n");
	for(j=0;j<50;j++)
	{
		                                                                                            //if(male_products[j][0]=='\0')
			                                                                                    	//break;
		for(k=0;k<10;k++)
		{
			if(strcmp(male_products[j][0],products_male[k][0])==0)
			{
				printf("%s\t\t\t%s\t\t\t%s\t\t%s\t\t$%s\t\t  %s\n",products_male[k][0],products_male[k][3],products_male[k][1],products_male[k][2],products_male[k][4],male_products[j][1]);
				total += (atof(products_male[k][4])) * (atof(male_products[j][1]));       //here male products
				
			}
		}	
	}
	for(j=0;j<50;j++)
	{
	
	                                                                                 	//if(male_products[j][0]=='\0')
			                                                                        	//break;
				
				
		for(k=0;k<10;k++)
		{
			if(strcmp(female_products[j][0],products_female[k][0])==0)
			{
				printf("%s\t\t\t%s\t\t\t%s\t\t%s\t\t$%s\t\t  %s\n",products_female[k][0],products_female[k][3],products_female[k][1],products_female[k][2],products_female[k][4],female_products[j][1]);
				total += (atof(products_female[k][4])) * (atof(female_products[j][1]));           
				                                                                                      // here only female products 
			}
		}	
	}
	for(j=0;j<50;j++)
	{
	              	                                                                   //if(female_products[j][0]=='\0')
			                                                           	               //break;
				
		for(k=0;k<10;k++)
		{
			if(strcmp(baby_products[j][0],products_baby[k][0])==0)
			{
				printf("%s\t\t\t%s\t\t\t%s\t\t%s\t\t$%s\t\t  %s\n",products_baby[k][0],products_baby[k][3],products_baby[k][1],products_baby[k][2],products_baby[k][4],baby_products[j][1]);
				total += (atof(products_baby[k][4])) * (atof(baby_products[j][1]));
				
			}                                                                                             
			                                                                                           //only for baby products
		}	
	}
	
   printf("\n\n\n");
   printf("Please enter your name:");
   scanf("%s", name);
   printf("Please enter your phone number:");
   scanf("%s",phn);
   
   printf("                                                               \n");
   printf("                                                               \n");
   printf("          ************************************************************** \n");
   printf("                                   RECEIPT                               \n");
   printf("          ************************************************************** \n");
   printf("                       \n");
   printf("                       \n");
	
	
	Tax=total*TaxRate;
	sub_total=Tax+total;

	printf("   Name                :%s\n",name);
    printf("   Phone number        :%s\n",phn);
	printf("   Total               :%7.2f\n", total);
	printf("   Tax                 :%7.2f\n",Tax);
	printf("   After tax total     :%7.2f\n",sub_total);                                                                   //finally here print total


   printf("                                      \n");
   printf("                                      \n");
   printf("************************************************************************************ \n");
   printf("************************************THANK YOU*************************************** \n");
   printf("************************************************************************************ \n");
   printf("                                      \n");
   printf("                                      \n");
}

