// Program to calculate the area of a rectangle
#include <iostream>
using namespace std;

void print_line();

class Rectangle {
  private:
  int length;
  int width;

  public:
  Rectangle(int length, int width) {
    this->length = length;
    this->width = width;
  }

  void set_length(int length) {
    this->length = length;
  }

  void set_width(int width) {
    this->width = width;
  }

  int get_length() {
    return length;
  }

  int get_width() {
    return width;
  }

  int get_area() {
    return length * width;
  }
};

int main() {

    // Create object of Rectangle class

    cout<<"A09 - Written by Robert Pratt\n\n";

    // Input Strings
    string len, wid;
    int l=0,w=0;

     //Remove Comment to Create the Rectangle
     Rectangle rect(0, 0);

    // Begin while() loop here
     while(true) {
      print_line();

      cout << "Please enter length of the rectangle (or 'x' to end): ";
      cin >> len;

      if(len.compare("x") == 0) {
        break;
      }

      l = stoi(len);
      rect.set_length(l);

      cout << "Please enter width of the rectangle: ";
      cin >> wid;
      w = stoi(wid);

      cout << rect.get_area();
    }
    cout << "\nBye\n";

    return 0;
}

void print_line() {
  for(int i = 0; i < 31; i++) {
    cout << "-";
  }
  cout << endl;
}
