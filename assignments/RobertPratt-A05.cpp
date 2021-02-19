#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string to_str(int i);

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
    bool isPrime = true;
    int numbers[10];
    int pointer = 0;


    for(int i = 2; i < 100; i++) {
      for(int j = 2; j < i; j++)
        if(i % j == 0) {
          isPrime = false;
          break;
        }

      if(isPrime && i % 10 == digit) {
        numbers[pointer] = i;
        pointer++;
        noneFound = false;
      }

      isPrime = false;
    }

    string answer = (char*)malloc(1);
    for(int i = 0; i <= (int)sizeof(numbers); i++){
      answer = answer + to_string((int)numbers[i]);
    }

    if(noneFound == false) {
      for(int i = 0; i < (int)sizeof(numbers); i++)
        cout << numbers[i];
    }
    else
      cout << "NONE";
    return 0;
}

string to_str(int i) {
  stringstream strstream;
  strstream << i;
  return strstream.str();
}
