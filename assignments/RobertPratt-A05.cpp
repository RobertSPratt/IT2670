#include <iostream>
#include <string>

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
    bool isPrime = false;
    int numbers[10];


    for(int i = 0; i < 100; i++) {
      if(i % 2 == 0)
        isPrime = true;

      if(isPrime && i % 10 == digit) {
        noneFound = true;

        for(int j = 0; j <= (int)sizeof(numbers); j++)
          if(numbers[j] == 0) {
            numbers[j] = i;
            continue;
          }
      }

      isPrime = false;
    }

    string answer = "";
    for(int i = 0; i <= (int)sizeof(numbers); i++)
      answer += to_string((char)numbers[i]) + " ";

    //cout << (noneFound == false) ? answer : "NONE";
    if(!noneFound)
      cout << "NONE";
    else
      cout << answer;
    return 0;
}
