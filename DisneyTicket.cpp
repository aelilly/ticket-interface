// DisneyTicket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double days, total, days2;
    string hopper, genie;

    cout << "Input number of days for ticket: ";
    cin >> days;
    days2 = days;

    cout << "Park Hopper? (y/n): ";
    cin >> hopper;

    cout << "Disney Genie+? (y/n): ";
    cin >> genie;
    
    days *= 100;
    total = days;
    cout << endl << setw(30) << left << "Base Ticket Cost" << "$" << days << endl;

    if (hopper == "y" || hopper == "Y") {
        double hopper;
        hopper = days2 * 10;
        cout << setw(30) << left << "Park Hopper Cost" << "$" << setw(3) << right << hopper << endl;
        total += hopper;
    }
    if (genie == "y" || genie == "Y") {
        double genie;
        genie = days2 * 15;
        cout << setw(30) << left << "Disney Genie+ Cost" << "$" << setw(3) << right << genie << endl;
        total += genie;
    }

    cout << setw(30) << left << "Total" << "$" << total;

}

/*
Input number of days for ticket: 3
Park Hopper? (y/n): y
Disney Genie+? (y/n): y

Base Ticket Cost              $300
Park Hopper Cost              $ 30
Disney Genie+ Cost            $ 45
Total                         $375
*/

/*
Input number of days for ticket: 6
Park Hopper? (y/n): y
Disney Genie+? (y/n): N

Base Ticket Cost              $600
Park Hopper Cost              $ 60
Total                         $660
*/

