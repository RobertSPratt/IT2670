// Create User defined Exception in C++

#include <iostream>
#include <exception>
using namespace std;

// place class definition here

int main()
{
    cout << "Assignment 13 written by Robert Pratt\n\n";

    // Input Strings
    string divisor, dividend;

    int x, y, counter=1;

    while (true) {

        cout << "Pass " << counter++ << "\n-----------------------------\n";
        cout << "Please enter the dividend (or 'x' to end): ";
        cin >> dividend;
        cout << dividend << "\n";

        if(!dividend.compare("x")){
            cout << "\nProgram Terminated by User\n";
            break;
        }

        cout << "\nPlease enter the divisor : ";
        cin >> divisor;
        cout << divisor << "\n\n";

        x = std::stoi(dividend);
        y = std::stoi(divisor);

        try {
            if(y == 0) {
                throw 1;
            }
            int quotient = x / y;
            cout << "x / y = " << quotient << endl << endl;
        }
        catch(int e) {
            cout << "Attempted to divide by zero!" << endl << endl;
        }
    }

    cout << "\nBye\n";
}
