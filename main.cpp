/*
 * Robert Bishop
 * 5/23/2017
 * I hereby certify this code is my work and my work alone and understand
 * the syllabus regarding plagiarized code.
 */

// This application calculates gross and net box office profit for a theater.
#include <iostream>
#include <string>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;
using std::showpoint;
using std::fixed;
using std::setprecision;
using std::string;
using std::right;
using std::setw;

int main()  {
    // Stores the movie title
    string movieName;
    cout << "What is the movie name:" <<endl;
    getline(cin, movieName);

    // Stores values of adult tickets
    int adultTicket = 12;
    int totalAdultSales;
    cout << "How many Adult tickets sold:" << endl;
    cin >> totalAdultSales;

    // Stores value of child tickets
    int childTicket = 9;
    int totalChildSales;
    cout << "How many Child tickets sold:" << endl;
    cin >> totalChildSales;

    // Prints movie title with quotes
    string addPar = "\"" + movieName + "\"";
    cout << "Movie Name:" << setw(30) << right << addPar <<endl;

    // Prints adult ticket sales
    cout << "Adult Tickets Sold:" << setw(12) << setprecision(2)
         << fixed << totalAdultSales << endl;

    // Prints child ticket sales
    cout << "Child Tickets Sold:" << setw(12) << totalChildSales << endl;

    // Prints and calculates gross profit
    double grossCal = (adultTicket * totalAdultSales)
                      + (childTicket * totalChildSales);
    cout << "Gross Box Office Profit:" << setw(8) << showpoint
         << "$ " << grossCal << endl;

    // Prints and calculates net profit
    double netCal = grossCal *0.22;
    cout << "Net Box Office Profit:" << setw(10)
         << showpoint << "$ " << netCal<< endl;

    // Prints amount paid to Dist
    cout << "Amount Paid to Distributor:" << setw(5) << showpoint << "$ "
         << grossCal - netCal << endl << endl;

    // Pauses screen for viewing
    char pause = cin.get();
    cout << "Press enter to continue: ";
    cin.get(pause);
    return 0;
}
