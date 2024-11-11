// IntrestEarned.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
File name: IntrestEarned
Programmer: Ozair Ghaissi
Date: 11/10/2024
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double principal, rate, timesCompounded, amount, interest;

    // Input values
    cout << "Enter the principal: ";
    cin >> principal;
    cout << "Enter the interest rate (as a percentage): ";
    cin >> rate;
    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> timesCompounded;

    // Convert rate from percentage to decimal
    rate /= 100.0;

    // Calculate amount in savings
    amount = principal * pow(1 + (rate / timesCompounded), timesCompounded);
    interest = amount - principal;

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nInterest Rate:       " << rate * 100 << "%" << endl;
    cout << "Times Compounded:    " << timesCompounded << endl;
    cout << "Principal:          $" << principal << endl;
    cout << "Interest:           $" << interest << endl;
    cout << "Amount in Savings:  $" << amount << endl;

    return 0;
}
