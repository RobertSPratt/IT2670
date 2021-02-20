#include <iostream>
#include <string>

using namespace std;

bool find_specific_primes(int digit);

int main()
{

    cout<<"A05 - Written by Robert Pratt\n\n";

    // Input String
    string input;

    cout << "Please enter a number between 0 and 9 : \n";
    cin >> input;

    int digit;  // holds a single digit

    // Get the digit
    digit = atof(input.c_str());

    cout << "\nYou entered " << digit << " and the prime numbers that end with a " << digit << " are ";

    if(!find_specific_primes(digit))
        cout << "NONE";
}

//returns true if primes ending in the specified digit are found, false otherwise
bool find_specific_primes(int digit) {
    bool is_prime = true;
    bool none_found = true;

    for(int i = 2; i < 100; i++) {
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                is_prime = false;
                break;
            }
        }

        if(is_prime && i % 10 == digit) {
            cout << i << " ";
            none_found = false;
        }

        is_prime = true;
    }

    return !none_found;
}
