#include <iostream>

using namespace std;

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

    bool noneFound = true;
    string numbers = "";

    for(int i = 0; i < 100; i++) {
      bool isPrime = false;

      if(i % 2 == 0) {
        isPrime = true;

        if(i % 10 == digit) {
          numbers += " " + i;
          noneFound = false;
        }
      }
    }

    cout << (noneFound == false) ? numbers : "NONE";
    return 0;
}
