#include <iostream>

using std::string;
using std::cout;

class Nameable {
  private:

  public:
  virtual string getName() = 0;
  virtual void setName(string n) = 0;
};

class Mammal {
  private:

  public:
  void generateHeat() {
    cout << "Generating Heat\n";
  }
};

class Head {
  private:
  double headSize;
};

class Dog : public Mammal, public Nameable {
  private:
  Head head;
  string name;

  public:
  void makeNoise() {
    cout << "Bark\n";
  }

  string getName() {
    return name;
  }

  void setName(string n) {
    name = n;
  }
};

int main() {
  cout << "Assignment 11 by Robert Pratt\n";

  Dog fido;

  fido.generateHeat();
  fido.makeNoise();

  fido.setName("Fido");
  cout << "Name = " + fido.getName();
}
