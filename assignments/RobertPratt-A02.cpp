#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {

  double minutesInYear = 60 * 24 * 365;

  string input;

  cout << "Input the number of minutes: ";
  cin >> input;

  double min;
  min = atof(input.c_str());

  // put code here (I completed the assignment with 3 lines of code)
  int years = min / minutesInYear;
  int days = ((min / minutesInYear) - years) * 365;

  printf("You entered %.5e \n%.0f is approximately %i years and %i days",
         min, min, years, days);

  return 0;
}
