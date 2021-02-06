/*
 * Prof. Weisfeld
 * IT2670, Spring 2021
 * Robert Pratt
 * Assignment 04
*/

// C++ program to determine if a year is a leap year
#include <iostream>
#include <math.h>
using namespace std;

// Mainline
int main()
{
    // Input String
    string input;

    cout << "Please enter a year : ";
    cin >> input;

    int year; // holds a year

    // Get the year
    year = atof(input.c_str());

    cout << "\nYou entered " << year<< " and ";

    // Determine if year is a leap year
    string answer = (year % 4 == 0) ? "IS" : "is NOT";

    cout << "the year " << year << " " << answer << " a leap year.";

    return 0;
}
