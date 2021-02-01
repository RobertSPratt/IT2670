#include <iostream>
#include <math.h>
using namespace std;

double hexagonArea(double s)
{
    return (((3 * sqrt(3)) / 2) * (s * s));
}

int main()
{
    string input;

    cout << "Input the length of a side: ";
    cin >> input;

    double s;
    s = atof(input.c_str());

    cout << "Area : " << hexagonArea(s);
    return 0;
}
