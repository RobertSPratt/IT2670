#include <iostream>
using namespace std;

class Engine {
  public:
  void combust() {
    cout << "Engine On" << endl;
  }
};

class Phone {
  private:
  string name;

  public:
  void set_name(string name) {
    this->name = name;
  }

  void connect() {
    cout << "Phone Connected" << endl;
  }
};

class Car {
  private:
  Engine engine;
  string name;

  public:
  void set_name(string name) {
    this->name = name;
  }

  void start(Phone phone) {
    phone.connect();
    engine.combust();
    cout << "Car Started" << endl;
  }
};

int main()
  {
    cout << "Assignment 10 written by Robert Pratt\n\n";

    Car mustang;
    Phone android;

    mustang.set_name("mustang");
    android.set_name("android");

    mustang.start(android);

    cout << "\nBye\n";
  }
