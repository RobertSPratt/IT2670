#include <iostream>
using namespace std;

class Car {       // The class
    private:
        string color;

    public:
        Car() {
          this -> color = "Green";
          cout << "\n*** You are inside Car Constructor and the color from the factory is Green." << endl;
        }

        void set_color(string c) {
          color = c;
          cout << "\n*** The color is now " << color << endl;
        }

        string get_color() {
          return color;
        }

        void start() {
            cout << "\nThe Car Has Started\n";
        }

};

int main()
{

    cout<<"A06 - Written by Robert Pratt\n";

    // Input String
    string consoleInput;

    Car myCar;

    while(true) {
      cout << "\nPlease enter a color (or 'x' to end): \n";
      cin >> consoleInput;

      cout << "\nYou entered " << consoleInput << "\n";

      if(consoleInput == "x")
        break;

      myCar.set_color(consoleInput);
    }

    //myCar.start();

    cout << "\nGoodbye!";

    return 0;
}
