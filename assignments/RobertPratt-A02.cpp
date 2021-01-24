#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

  double minutesInYear = 60 * 24 * 365;

  string input;

  cout << "Input the number of minutes: ";
  cin >> input;

  double min;
  min = atof(input.c_str());

  // put code here (I completed the assignment with 3 lines of code)
  cout << "You entered " << scientific << min << endl;
  cout << (int)min << " minutes is approximately " << (int)(min / minutesInYear) << " years and " << (int)(((min / minutesInYear) - (int)(min / minutesInYear)) * 365) << " days";

  return 0;
}
