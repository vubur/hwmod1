/*
 * Robert Bishop
 * 5/23/2017
 * I hereby certify this code is my work and my work alone and understand
 * the syllabus regarding plagiarized code.
 */

// The goal of this application is to calculate gross and net box office profit for a one day time period
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    //Stores the movie title
    string movieName;
    cout << "What is the movie name:" <<endl;
    getline(cin, movieName);

    //Stores values of adult tickets sold
    int adultTicket = 12;
    int totalAdultSales;
    cout << "How many adult tickets sold:" << endl;
    cin >> totalAdultSales;

    //Stores value of child tickets sold
    int childTicket = 9;
    int totalChildSales;
    cout << "How many child tickets sold:" << endl;
    cin >> totalChildSales;

    //Prints movie title with quotes
    string addPar = "\"" + movieName + "\"";
    cout << "Movie Name:" << setw(30) << right << addPar <<endl;

    //Prints total adult ticket sales
    cout << "Total Adult tickets sold:" << setw(12) << setprecision(2) << fixed << totalAdultSales << endl;

    // Displays total amount of child tickets sold
    cout << "Total Child tickets sold:" << setw(12) << totalChildSales << endl;

    //Displays and calculates gross profit
    double grossCal = (adultTicket * totalAdultSales) + (childTicket * totalChildSales);
    cout << "Gross Box Office Profit:" << setw(10) << showpoint << "$ " << grossCal << endl;

    //Displays and calculates net profit
    double netCal = grossCal *0.22;
    cout << "Net Box Office Profit:" << setw(12) << showpoint << "$ " << netCal<< endl;

    //Displays amount paid to Dist
    cout << "Amount Paid to Distributor:" << setw(7) << showpoint << "$ " << grossCal - netCal << endl;

    //Pauses screen for viewing
    char pause = cin.get();
    cout << "Press enter to continue:";
    cin.get(pause);
    return 0;


}
