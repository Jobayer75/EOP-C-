#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string getShowtime(char);
double getRate(char);

int main() {
    cout << "This program prints a movie ticket" << endl;

    //Get required input from the user
    string movieName;
    char sTime;
    int noSeats;
    cout << "Enter the name of the movie           : ";
    cin >> movieName;
    cout << "Enter the time of the showing (M/A/E) : ";
    cin >> sTime;
    cout << "Enter the number of seats             : "; 
    cin >> noSeats;
    
    //Calculating the various items on the ticket
    //We already have the movie name
    string showTime = getShowtime(sTime);
    //We already have the number of seats
    double rate = getRate(sTime);
    double totPrice = noSeats * rate;

    //Printing the ticket
    cout << endl;
    cout << setw(66)  << setfill('*') << " " << endl; //We need 65 stars, so this prints a line of 66 columns, where the 66th column is a space preceeded by 65 stars
    cout << setw(65 - 21) << setfill(' ') << "Welcome to UHW Cinemas!" << endl; //We need 21 spaces before the text to align it to the center
    cout << left << setw(43) << setfill('.') << "Name of movie"  << ":" << right << setw(21) << setfill(' ') << movieName << endl;
    cout << left << setw(53) << setfill('.') << "Showtime"       << ":" << right << setw(11) << setfill(' ') << showTime  << endl;
    cout << left << setw(53) << setfill('.') << "No. of seats"   << ":" << right << setw(11) << setfill(' ') << noSeats   << endl;
    cout << setprecision(2) << fixed << showpoint;
    cout << left << setw(53) << setfill('.') << "Price per seat" << ": $" << right << setw(9) << setfill(' ') << rate      << endl;
    cout << left << setw(53) << setfill('.') << "Total price"    << ": $" << right << setw(9) << setfill(' ') << totPrice  << endl;
    cout << setw(41) << "Enjoy the movie!!" << endl; //We need 41 spaces before the text to align it to the center
    cout << setw(66) << setfill('*') << " " << endl;
    return 0;

}

string getShowtime(char t) {
    if (t == 'M' || t == 'm') return "10:00";
    else if (t == 'A' || t == 'a') return "14:00";
    else if (t == 'E' || t == 'e') return "19:00";
    else return "Na:Na";
}

double getRate(char t) {
    if (t == 'M' || t == 'm') return 3.00;
    else if (t == 'A' || t == 'a') return 5.00;
    else if (t == 'E' || t == 'e') return 7.00;
    else return 0.00;
}
