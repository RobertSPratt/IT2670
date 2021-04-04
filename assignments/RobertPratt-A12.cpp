#include <iostream>
using namespace std;

class Shape {
   public:
      double area;

   public:
      // pure virtual function
      virtual void getarea() = 0;
};
class Circle: public Shape {
   public:
        Circle(double r):Shape() {
            area = 3.14 * r * r;
        }

        void getarea () {
            cout << "Circle's area = " << area << "\n";
        }
};

class Square: public Shape {
   public:
        Square(double s):Shape() {
            area = s*s;
        }

        void getarea () {
            cout << "Square's area = " << area << "\n";
        }
};

// Main function for the program
int main() {

    cout << "Assignment 12 written by Robert Pratt\n\n";

    Shape *shapeArray[4];
    
    Circle circle1(3);
    Circle circle2(4);

    Square square1(2);
    Square square2(5);

    Circle *circleArray[2];
    Square *squareArray[2];

    circleArray[0] = &circle1;
    circleArray[1] = &circle2;

    squareArray[0] = &square1;
    squareArray[1] = &square2;

    cout << "Print Individual Shapes\n";

    for (int i = 0; i < 2; i++) {

         circleArray[i]->getarea();
         squareArray[i]->getarea();

    }

    shapeArray[0] = &circle1;
    shapeArray[1] = &circle2;
    shapeArray[2] = &square1;
    shapeArray[3] = &square2;

    cout << "\nPrint Abstract Shapes\n";

    for (int i = 0; i < 4; i++) {
      shapeArray[i]->getarea();
    }

    return 0;
}
