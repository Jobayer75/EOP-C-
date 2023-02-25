//Topic:Scrabble Game

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string.h>
#include <windows.h>//blank page


char randletter(); // generate random letter
void view_data(); // display game's instruction
void start(); // display header
void insert_data(char name[4][10]); // Insert player names
void delete_data(int point[4]);//delete all previous records
void update_data(char name[4][10],char player[4][5],char word[4][7], int point[4]);//update the scores of players

using namespace std;

int main()
{

		int i=0,j,k,a,cnt,point[4]={0,0,0,0};
	    char name[4][10],word[4][7]={},player[4][5]={},ans;

	do
	{
        delete_data(point);

        start();

	    view_data();

	    cout<<endl;
		cout<<"                              PRESS 1 TO CONTINUE ..... ";

	    cin>>a;
	    if(a==1) // press 1 to start the game
	    {
	        system("CLS");
			cout<<"                 :::  WELCOME TO THE SCRABBLE GAME :::   ";
			cout<<endl<<endl<<endl;
			cout<<" Let's log in to play the Game Of Scrambling "<<endl;

            insert_data(name); // insert player name

		    srand (time(NULL));
		    for(k=0;k<4;k++) // generate random letter for all player
		    {

			    for(i=0;i<5;i++)
			    {
			        player[k][i]=randletter();
			    }
		    }

		    do // this loop will continue until player reach 100 points
		   {
            system("cls");
            update_data(name,player,word, point);

		   }while(point[0]<100 && point[1]<100 && point[2]<100 && point[3]<100 );

		        system("CLS");
				cout<<"                 :::  WELCOME TO THE SCRABBLE GAME :::   ";
				cout<<endl<<endl<<endl;

		        cout <<endl<<endl<<endl<<endl<<endl<<"================================================================"<<endl;
		     if(point[0]>=100) // this if-else statement will display winner's name.


		        cout <<"\t\t\t Congratulation "<<name[0]<<endl;

		     else if(point[1]>=100)

		        cout <<"\t\t\t Congratulation "<<name[1]<<endl;


		     else if(point[2]>=100)

		        cout <<"\t\t\t Congratulation "<<name[2]<<endl;


		     else if(point[3]>=100)

		        cout <<"\t\t\t Congratulation "<<name[3]<<endl;

		        cout << "\t\t\t You've won the game"<<endl;
		        cout <<endl<<"================================================================"<<endl;
	    }
	    Sleep(3500);
	    system("CLS");

	    cout <<endl<<endl<<endl<<endl<<endl<< "\t\t Do you want to play again? (y-yes/n-no):";
	    cin >> ans;


	}while (ans=='y' || ans=='Y');

    return 0;
}
char randletter()
{

    int random,total=100;
    char cons[total]={'a','a','a','a','a','a','a','a','a',
                    'b','b',
                    'c','c',
                    'd','d','d','d',
                    'e','e','e','e','e','e','e','e','e','e','e','e',
                    'f','f',
                    'g','g','g',
                    'h','h',
                    'i','i','i','i','i','i','i','i','i',
                    'j','j',
                    'k','k',
                    'l','l','l','l',
                    'm','m',
                    'n','n','n','n','n','n',
                    'o','o','o','o','o','o','o','o',
                    'p','p',
                    'q',
                    'r','r','r','r','r','r',
                    's','s','s','s',
                    't','t','t','t','t','t',
                    'u','u','u','u',
                    'v','v',
                    'w','w',
                    'x',
                    'y','y',
                    'z'};


        random= 0+rand()%(total);



        return cons[random];
}

void view_data()
{
    cout<<"                 :::  WELCOME TO THE SCRABBLE GAME :::     ";
	cout<<endl<<endl<<endl;

	cout<<" Let's start with the rules :: "<<endl;
	Sleep(2000);
	cout<<" 1 : First of all the players will login their respective names . "<<endl;
	Sleep(2000);
	cout<<" 2 : Then each player will be given some random letters by computer . "<<endl;
	Sleep(2000);
	cout<<" 3 : Players have to type the longest possible word by using at least TWO of those random letters . "<<endl;
	Sleep(2000);
	cout<<" 4 : Each letter of the word will provide the player with 5 point  . "<<endl;
	Sleep(2000);
	cout<<" 5 : If a player types 7 letters or more in one word,he/she will be given an extra 30 points  . "<<endl;
	Sleep(2000);
	cout<<" 6 : The first player to exceed 100 points will be the winner. "<<endl;
	cout<<endl<<endl;
	cout<<" NOTE : All the words entered here should be meaningful and if any player \n enters a meaningless word than he will be disqualified !! "<<endl;

	cout<<endl;

}
void start()
{
    cout << "  \t#########################################################" << endl ;
    cout << "  \t#########################################################" << endl ;
	cout << "  \t### ##### ##     ## #######    ##     ##  ###  ##     ###" << endl ;
	cout << "  \t### ##### ## ###### ###### ###### ### ## # # # ## #######" << endl ;
	cout << "  \t### ## ## ##    ### ###### ###### ### ## ## ## ##    ####" << endl ;
	cout << "  \t### # # # ## ###### ###### ###### ### ## ##### ## #######" << endl ;
	cout << "  \t###  ###  ##     ##     ###    ##     ## ##### ##     ###" << endl ;
	cout << "  \t#########################################################" << endl ;
	cout << "  \t#########################################################" << endl ;

	Sleep(350);
	cout<<setw(30)<<"S";
	Sleep(350);
	cout<<"C";
	Sleep(350);
	cout<<"R";
	Sleep(350);
	cout<<"A";
	Sleep(350);
	cout<<"B";
	Sleep(350);
	cout<<"B";
	Sleep(350);
	cout<<"L";
	Sleep(350);
	cout<<"E";
	Sleep(350);
	cout<<" G";
	Sleep(350);
	cout<<"A";
	Sleep(350);
	cout<<"M";
	Sleep(350);
	cout<<"E \n\n";
	Sleep(350);
}
void insert_data(char name[4][10])
{

    for(int i=0;i<4;i++) // insert player name
		   {
		       cout << "Player " << i+1 << " : ";
		       cin >> name[i];
		   }
}

void delete_data(int point[4])
{
    system("CLS");
    for(int i=0; i<4; i++) {
        *(point + i) = 0;//Use of pointer
    }

}

void update_data(char name[4][10],char player[4][5],char word[4][7], int point[4])
{
    int i,j,cnt;
    for(int k=0;k<4;k++) // this loop will display all player's names and their points throughout the game
			    {
                    system("cls");
					cout<<"                 :::  WELCOME TO THE SCRABBLE GAME :::   ";
					cout<<endl<<endl<<endl;
					cout<<setw(25)<<"\tPlayer 1 : "<<name[0]<<setw(25)<<"\tPlayer 2 : "<<name[1]<<endl;
			        cout<<setw(25)<<"\tScore    : "<<point[0]<<setw(25)<<"\tScore    : "<<point[1]<<endl;
			        cout<<setw(25)<<"\tPlayer 3 : "<<name[2]<<setw(25)<<"\tPlayer 4 : "<<name[3]<<endl;
			        cout<<setw(25)<<"\tScore    : "<<point[2]<<setw(25)<<"\tScore    : "<<point[3]<<endl;

			    	cout << "\nPlayer "<< k+1<<" turn"<<endl<<endl;
			   		cout << "Your letter: "<<endl;

			    	for(i=0;i<5;i++) // display random letter
				    {
				        cout << player[k][i] << " ";
				    }

				    cout <<endl<< "Enter your word(press @ to skip): ";
				    cin >> word[k]; // enter @ to skip

                    int cnt = 0;
				    for (i=0; i<5 ; i++) {
                        for(j=0;j<5;j++) {
                            if(word[k][i] == player[k][j]) {
                                cnt++;
                                j=8;
                            }
                        }
				    }

				    if(cnt > 1)
				    {
				        *(point + k) += strlen(word[k])*5; // calculate the point per letter

				        if (strlen(word[k])>=7) // calculate extra 30 point if 7 letter used
				        {
				            *(point+k) +=30;//USe of pointer
				        }
				    }


				    if(word[k][0]=='@' )//the system will not add player's score if this condition is true
				    {
				    	for( i=0;i<5;i++)
			    			player[k][i]=randletter();

					}

				    for(i=0;i<5;i++) // this loop will generate new letter for each used letter
				    {
				        for(j=0;j<5;j++)
				        {
				            if (word[k][i]==player[k][j])
				            {
				                player[k][j]=randletter();
				            }
				        }
				    }
				    if(point[0]>=100)
				        break;
				    else if(point[1]>=100)
				        break;
				    else if(point[2]>=100)
				        break;
				    else if(point[3]>=100)
				        break;
			    }
}
