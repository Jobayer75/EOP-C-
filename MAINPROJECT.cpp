#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<fstream>
#include<iomanip>
#include <windows.h>
#define max 10
using namespace std;


struct medicine //constract medicine
{
	int receipt_number;
	string cust_name;
	int phn_num;
	string date;
	int qnty[10];
	string type = {"OTC"};
	int x, menu2[10];
    double amount[10];
    string medicineName[10]={"PARACITAMOL BP","MAXPRO(500mg)","VITAMIN-E(500mg)","METRONIDOJOL","MOMENTO","KETOROLAC",
	"AMINO ZINC Tablet","OFFCOUGH","BIODIN","BENZODIAZEPINES"};
	double Medicine[10] = {5.00,4.00,2.00,3.00,1.00,5.00,6.00,3.00,2.00,7.00};
	double total;
	double sum;

	medicine *prev;
	medicine *next;
	medicine *link;

}*q, *temp;				//pointer declaration


medicine *start_ptr = NULL;
medicine *head = NULL;
medicine *last = NULL;

void take_order()		//function to take_order
{
	system("cls");
	int i;
    int choice, quantity, price,None;

    medicine *temp;
	temp=new medicine;

                cout<<" "<<endl;
                cout<<"\t\t\t|**************************************************************************|"<<endl;
                cout<<"\t\t\t|***************SELECT YOUR ITEMS (maximum 10 from each item)**************|"<<endl;
                cout<<"\t\t\t|**************************************************************************|"<<endl;
                cout<<"\t\t\t|  Number       Type                Name of Medicine              Price    |"<<endl;
                cout<<"\t\t\t|**************************************************************************|"<<endl;
                cout<<"\t\t\t|  0001"<<"\t"<<"\tOTC"<<"\t\t"<<"    PARACITAMOL BP    "<<"\t\t  RM 5.00  |"<<endl;
                cout<<"\t\t\t|  0002"<<"\t"<<"\tOTC"<<"\t\t"<<"    MAXPRO(500mg)     "<<"\t\t  RM 4.00  |"<<endl;
                cout<<"\t\t\t|  0003"<<"\t"<<"\tOTC"<<"\t\t"<<"    VITAMIN-E(500mg)  "<<"\t\t  RM 2.00  |"<<endl;
                cout<<"\t\t\t|  0004"<<"\t"<<"\tOTC"<<"\t\t"<<"    METRONIDOJOL      "<<"\t\t  RM 3.00  |"<<endl;
                cout<<"\t\t\t|  0005"<<"\t"<<"\tOTC"<<"\t\t"<<"    MOMENTO           "<<"\t\t  RM 1.00  |"<<endl;
                cout<<"\t\t\t|  0005"<<"\t"<<"\tOTC"<<"\t\t"<<"    KETOROLAC         "<<"\t\t  RM 5.00  |"<<endl;
                cout<<"\t\t\t|  0007"<<"\t"<<"\tOTC"<<"\t\t"<<"    AMINO ZINC Tablet "<<"\t\t  RM 6.00  |"<<endl;
                cout<<"\t\t\t|  0008"<<"\t"<<"\tOTC"<<"\t\t"<<"    OFFCOUGH          "<<"\t\t  RM 3.00  |"<<endl;
                cout<<"\t\t\t|  0009"<<"\t"<<"\tOTC"<<"\t\t"<<"    BIODIN            "<<"\t\t  RM 2.00  |"<<endl;
                cout<<"\t\t\t|  0010"<<"\t"<<"\tOTC"<<"\t\t"<<"    BENZODIAZEPINES   "<<"\t\t  RM 7.00  |"<<endl;
                cout<<"\t\t\t****************************************************************************"<<endl;
                cout<<" "<<endl;

	temp = new medicine;
	cout<< "\t**PLEASE ADD YOUR DETAILS**"<<endl;
	cout<< "\t---------------------------"<<endl;
	cout<< "\t1.Enter Receipt Number(new)   :  ";
    cin >> temp->receipt_number;
	cout<< "\t2.Enter Customer Frist Name   :  ";
	cin>> temp->cust_name;
	cout<< "\t3.Enter Customer Phone Number :  ";
	cin>> temp->phn_num;
	cout<< "\t4.Enter Order Date            :  ";
	cin>>temp->date;
	cout<< "\t5.How Many You Want To Order  :  ";
    cin >> temp->x;
    cout<< "\t---------------------------"<<endl;
	if (temp->x >10)
	{
		cout << "\t(The medicine you order is exceed the maximum amount of order !)"<<endl<<endl;
		system("PAUSE");
	}
	else{
	for (i=0; i<temp->x; i++)
	{

        cout<<"\t"<<i+1<<".Enter The code of Madecine  :  ";
		cin >> temp->menu2[i];
        cout<< "\t  You Chosen Medicine is      :  "<<temp->medicineName[temp->menu2[i]-1]<<endl;
        cout<< "\t  How many do you want        :  ";
        cin >> temp->qnty[i];
        temp->amount[i] = temp->qnty[i] * temp->Medicine[temp->menu2[i]-1];
        cout<< "\t *The amount You need to pay  :  " << temp->amount[i]<<" RM"<<endl<<endl;


	}
	cout<<"\t---------------------------------------------"<<endl;
    cout <<"\t      Order Has Been Taken Successfully     "<<endl;
    cout<<"\t---------------------------------------------"<<endl;
    cout<<"\t Go To Main Menu to Print the receipt & Bill "<<endl;
    cout<<"\t---------------------------------------------"<<endl;
	system ("PAUSE");

    temp->next=NULL;
	if(start_ptr!=NULL)
	{
		temp->next=start_ptr;
	}
	start_ptr=temp;
	system("cls");
}
}

void order_list()		//Function to display receipt
{	system ("cls");
	int i, num, num2;
	bool found;			//variable to search
	system("cls");
	medicine *temp;

	temp=start_ptr;
	found = false;

	cout<<"\n\t Enter The Receipt Number To Print : ";
	cin>>num2;
	cout<<endl<<endl;

    if(temp == NULL) //Invalid receipt code
	{
		cout<<"\t\t\t|**************************************************************************|"       <<endl;
	    cout<<"\t\t\t|              NO ORDER HAS BEEN TAKEN IN THIS NUMBER                      |"       <<endl;
	    cout<<"\t\t\t|                                 &                                        |"       <<endl;
	    cout<<"\t\t\t|                    PLEASE MAKE AN ORDER FIRST                            |"       <<endl;
	    cout<<"\t\t\t****************************************************************************"<<endl <<endl;
	}
	while(temp !=NULL && !found)
	{
      if (temp->receipt_number==num2)
      {
         found = true;
      }
      else
      {
         temp = temp -> next;
      }
      if (found)	//print the receipt
      {
        cout<<"\t\t\t|**************************************************************************|"<<endl;
	    cout<<"\t\t\t|                          Here is the Order list                          |"<<endl;
	    cout<<"\t\t\t|**************************************************************************|"<<endl;
        cout<<"\t\t\t| Reciept No : "<<setw(40)<<left<<temp->receipt_number<<"Date :"<<setw(13)<<left<<temp->date<<" |"<<endl;
        cout<<"\t\t\t|**************************************************************************|"<<endl;
        cout<<"\t\t\t| Customer Name         : "<<setw(47)<<left<<temp->cust_name          <<"  |"<<endl;
        cout<<"\t\t\t| Customer Phone Number : "<<setw(47)<<left<<temp->phn_num            <<"  |"<<endl;
		cout<<"\t\t\t|==========================================================================|"<<endl;
        cout<<"\t\t\t| Type             Name of Medicine           Quantity            Price    |"<<endl;
        cout<<"\t\t\t|==========================================================================|"<<endl;
       for (i=0;i<temp->x;i++)
        {
         cout<<"\t\t\t| "<<setw(17)<<left<<temp->type<<""<<setw(30)<<left<<temp->medicineName[temp->menu2[i]-1]<<""<<setw(2)<<right<<temp->qnty[i]<<""<<setw(18)<<right<<temp->amount[i]<<" RM   |"<<endl;
         cout<<"\t\t\t|--------------------------------------------------------------------------|"<<endl;
        }
		        temp->total = temp->amount[0]+temp->amount[1]+temp->amount[2]+temp->amount[3]+temp->amount[4]+temp->amount[5]+temp->amount[6]+temp->amount[7]
						+temp->amount[8]+temp->amount[9];
        cout<<"\t\t\t|\t                                   Total Bill is : "<<setw(10)<<temp->total<<" RM   |"<<endl;
        cout<<"\t\t\t****************************************************************************"<<endl;

		cout<<"\n";
		cout << "\t Type The Amount You Want to pay: ";
        cin >> num;
        if (num == temp->total)
         {
		  cout<<" "<<endl;
		 }
		else if(num > temp->total)
         {
          temp->sum = num-temp->total;
          cout<<"\t YOU HAVE " <<temp->sum <<" RM BACK, TAKE YOUR MONEY" <<endl;
		 }
        else if(num < temp->total)
         {
          temp->sum = temp->total - num;
          cout <<"\t YOU HAVE TO PAY " <<temp->sum <<" RM MORE" <<endl;
         }

      }
      cout<<"\n\t\t\t\t\t\t PAYMENT DONE & THANK YOU" <<endl<<endl;
	  cout <<"------------------------------------------------------------ O --------------------------------------------------------" <<endl<<endl;
    }

	system("PAUSE");
	system("cls");
}

void delete_order()	//function to delete_order
{
	system("cls");
	int i, num, count;
    cout<<"\tEnter the data you want to delete  :";
    cin>>num;
    medicine *q;
	medicine *temp;
	bool found;

	if(start_ptr == NULL)
		cerr<<"\n\tCan not delete from an empty list.\n"<<endl;
	else
	{
		if(start_ptr->receipt_number == num)
		{
			q = start_ptr;
			start_ptr = start_ptr->next;
			count--;
			if(start_ptr == NULL)
			last = NULL;
			delete q;
			cout<<"\n\tThe Receipt is Deleted Successfully"<<endl<<endl;
		}
		else
		{
			found = false;
			temp = start_ptr;
			q = start_ptr->next;

		while((!found) && (q != NULL))
		{
  			if(q->receipt_number != num)
			{
				temp = q;
				q = q-> next;
			}
			else
				found = true;
		}

			if(found)
			{
				temp->next = q->next;
				count--;

				if(last == q)
				last = temp;
				delete q;
				cout<<"\n\tThe Reciept is Deleted Successfully"<<endl<<endl;
			}
			else
				cout<<"\n\tItem to be deleted is not in the list."<<endl<<endl;
			}
		}
	system("PAUSE");
	system("cls");
}

void modify()		//function to modify order
{
	system ("cls");
	int i, ch, sid;
	bool found;
	found = false;
	temp = start_ptr;

	cout<<"\n\tEnter Receipt Number To Modify   :  ";
	cin>>sid;

    if (sid != temp->receipt_number)
    {
        cout<<"\t\t\t|**************************************************************************|"       <<endl;
	    cout<<"\t\t\t|                  NO RECORDS AVAILABLE FOR MODIFING                       |"       <<endl;
        cout<<"\t\t\t|                                 &                                        |"       <<endl;
	    cout<<"\t\t\t|                  PLEASE ENTER VALID RECEIPT NUMBER                       |"       <<endl;
	    cout<<"\t\t\t****************************************************************************"<<endl <<endl;
    }

    else
    {
 	 while(temp !=NULL && !found)
	  {
		if (temp->receipt_number==sid)
		{
			found = true;
		}
		else
		{
			temp = temp -> next;
		}
       if (found)
       {
         cout<<" "<<endl;
         cout<<"\t\t\t|**************************************************************************|"<<endl;
         cout<<"\t\t\t|***************SELECT YOUR ITEMS (maximum 10 from each item)**************|"<<endl;
         cout<<"\t\t\t|**************************************************************************|"<<endl;
         cout<<"\t\t\t|  Number       Type                Name of Medicine              Price    |"<<endl;
         cout<<"\t\t\t|**************************************************************************|"<<endl;
         cout<<"\t\t\t|  0001"<<"\t"<<"\tOTC"<<"\t\t"<<"    PARACITAMOL BP    "<<"\t\t  RM 5.00  |"<<endl;
         cout<<"\t\t\t|  0002"<<"\t"<<"\tOTC"<<"\t\t"<<"    MAXPRO(500mg)     "<<"\t\t  RM 4.00  |"<<endl;
         cout<<"\t\t\t|  0003"<<"\t"<<"\tOTC"<<"\t\t"<<"    VITAMIN-E(500mg)  "<<"\t\t  RM 2.00  |"<<endl;
         cout<<"\t\t\t|  0004"<<"\t"<<"\tOTC"<<"\t\t"<<"    METRONIDOJOL      "<<"\t\t  RM 3.00  |"<<endl;
         cout<<"\t\t\t|  0005"<<"\t"<<"\tOTC"<<"\t\t"<<"    MOMENTO           "<<"\t\t  RM 1.00  |"<<endl;
         cout<<"\t\t\t|  0005"<<"\t"<<"\tOTC"<<"\t\t"<<"    KETOROLAC         "<<"\t\t  RM 5.00  |"<<endl;
         cout<<"\t\t\t|  0007"<<"\t"<<"\tOTC"<<"\t\t"<<"    AMINO ZINC Tablet "<<"\t\t  RM 6.00  |"<<endl;
         cout<<"\t\t\t|  0008"<<"\t"<<"\tOTC"<<"\t\t"<<"    OFFCOUGH          "<<"\t\t  RM 3.00  |"<<endl;
         cout<<"\t\t\t|  0009"<<"\t"<<"\tOTC"<<"\t\t"<<"    BIODIN            "<<"\t\t  RM 2.00  |"<<endl;
         cout<<"\t\t\t|  0010"<<"\t"<<"\tOTC"<<"\t\t"<<"    BENZODIAZEPINES   "<<"\t\t  RM 7.00  |"<<endl;
         cout<<"\t\t\t****************************************************************************"<<endl;
         cout<<" "<<endl<<endl;

         cout<< "\t----------------------------------"<<endl;
         cout<< "\t1.Change Receipt Number(new)     :  ";
         cin >> temp->receipt_number;
         cout<< "\t2.Change Customer Frist Name     :  ";
         cin>> temp->cust_name;
         cout<< "\t3.Change Customer Phone Number   :  ";
         cin>> temp->phn_num;
         cout<< "\t4.Change Order Date              :  ";
         cin>>temp->date;
         cout<< "\t5.How Many You Want To Order     :  ";
         cin >> temp->x;
         cout<< "\t----------------------------------"<<endl;


            if (temp->x >10)
            {
                cout << "\t(The medicine you order is exceed the maximum amount of order !)";
                system("PAUSE");
            }
            else{

            for(int i=0; i<sizeof(temp->amount)/sizeof(temp->amount[0]); i++){
                temp->amount[i] = 0;
            }
            for (i=0; i<temp->x; i++)
             {
                cout<< "\t"<<i+1<<".Enter The New code of Madecine :  ";
                cin >> temp->menu2[i];
                cout<< "\t  Changed Medicine is            :  "<<temp->medicineName[temp->menu2[i]-1]<<endl;
                cout<< "\t  How Many Do You Want(New)      :  ";
                cin >> temp->qnty[i];
                temp->amount[i] = temp->qnty[i] * temp->Medicine[temp->menu2[i]-1];
                cout<< "\t *The New Amount You Need To Pay :  " << temp->amount[i]<<" RM"<<endl<<endl;

             }
             cout<<"\n-------------------------------------------[ RECORD MODIFIED....! ]-----------------------------------------------------"<<endl;

            temp = temp->next;
            Sleep(1000);

            }
         }

      }
    }
    system("PAUSE");
    system("cls");
}

void daily_summary()		//Function to display Daily Summary
{
	system ("cls");
	int i,num;
	medicine *temp ;

	temp=start_ptr;


	if(temp == NULL) //Invalid receipt code
	{
		cout<<"\t\t\t|**************************************************************************|"       <<endl;
	    cout<<"\t\t\t|                  NO RECORDS AVAILABLE FOR DELATING                       |"       <<endl;
        cout<<"\t\t\t|                                 &                                        |"       <<endl;
	    cout<<"\t\t\t|                     THE RECORDED FILE IS EMPTY                           |"       <<endl;
	    cout<<"\t\t\t****************************************************************************"<<endl <<endl;
	}
	else
	{
		cout<<"\n";
        cout<<"\t\t\t|**************************************************************************|"<<endl;
	    cout<<"\t\t\t|                      Here Is The  ALL Order list                         |"<<endl;
	    cout<<"\t\t\t|**************************************************************************|"<<endl<<endl;

		while(temp!=NULL)
		{

            cout<<"\t\t\t|**************************************************************************|"<<endl;
            cout<<"\t\t\t| Reciept No : "<<setw(40)<<left<<temp->receipt_number<<"Date :"<<setw(13)<<left<<temp->date<<" |"<<endl;
            cout<<"\t\t\t|**************************************************************************|"<<endl;
            cout<<"\t\t\t| Customer Name         : "<<setw(47)<<left<<temp->cust_name          <<"  |"<<endl;
            cout<<"\t\t\t| Customer Phone Number : "<<setw(47)<<left<<temp->phn_num            <<"  |"<<endl;
            cout<<"\t\t\t|==========================================================================|"<<endl;
            cout<<"\t\t\t| Type             Name of Medicine           Quantity            Price    |"<<endl;
            cout<<"\t\t\t|==========================================================================|"<<endl;


            for (i=0;i<temp->x;i++)
            {
                cout<<"\t\t\t| "<<setw(17)<<left<<temp->type<<""<<setw(30)<<left<<temp->medicineName[temp->menu2[i]-1]<<""<<setw(2)<<right<<temp->qnty[i]<<""<<setw(18)<<right<<temp->amount[i]<<" RM   |"<<endl;
                cout<<"\t\t\t|--------------------------------------------------------------------------|"<<endl;
                temp->total += temp->amount[i];
            }

            cout<<"\t\t\t|\t                                   Total Bill is : "<<setw(10)<<temp->total<<" RM   |"<<endl;
            cout<<"\t\t\t****************************************************************************"<<endl;

            cout<<"\n\n";

			temp=temp->next;
		}
	}
	system("PAUSE");
	system("cls");
}

void exit() //Function to exit
{	system ("cls");
	cout<<"\n\t\t\t|************************************************************************|"       <<endl;
	cout<<  "\t\t\t|                         YOU CHOOSE TO EXIT                             |"       <<endl;
    cout<<  "\t\t\t|                                 &                                      |"       <<endl;
	cout<<  "\t\t\t|                     THANKS FOR STAYING WITH US                         |"       <<endl;
	cout<<  "\t\t\t**************************************************************************"<<endl <<endl;
}

int main()
{   int choice;

   do
   {
        cout<<" "<<endl;
                cout<<"\t\t\t|************************************************************************|\n";
                cout<<"\t\t\t|********************  WELLCOME TO FRIEND'S PHARMACY  *******************|\n";
                cout<<"\t\t\t|************************************************************************|\n";
                cout<<"\t\t\t|  Select what you want:                                                 |\n";
                cout<<"\t\t\t|                        1. Make an order of Medicine                    |"<<endl;
                cout<<"\t\t\t|                        2. Delete latest Medicine order                 |"<<endl;
                cout<<"\t\t\t|                        3. Modify Order List                            |"<<endl;
                cout<<"\t\t\t|                        4. Print the Reciept and Make Payment           |"<<endl;
                cout<<"\t\t\t|                        5. Daily Summary of total Sale                  |"<<endl;
                cout<<"\t\t\t|                        6. Exit                                         |"<<endl;
                cout<<"\t\t\t**************************************************************************\n";
                cout<<" "<<endl;


                cout<<"\tEnter choice: ";
                cin>> choice;

  switch (choice)
	{
		case 1:
			{
                take_order();
				break;
			}


		case 2:
			{
				delete_order();
				break;
			}

		case 3:
			{
				modify();
				break;
			}

		case 4:
			{
				order_list();
				break;
			}
		case 5:
			{
				daily_summary();
				break;
			}
        case 6:
			{
				exit();
				goto a;
				break;
			}


		default:
			{
				cout<<"\n\tSORRY YOUR INPUT IS OUT OF SELECTION.PLEASE RE-ENTER INPUT.\n"<<endl;
				break;
			}
		}
	}while(choice!=6);

	a:
	system ("PAUSE");
	getch();
}


