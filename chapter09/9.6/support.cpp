// support.cpp -- use external variables
// compile with external.cpp
#include <iostream>
extern double warming; // use warming from another file

// function prototypes
void update(double dt);
void local();

using std::cout;
void update(double dt) { // modify global variable 
  extern double warming; // optional redeclaration

  warming += dt;
  cout << "Updating global warming to " << warming;
  cout << " degrees.\n";
}

void local() { // use local variable
  double warming = 0.8; // new variable hides external one

  cout << "Local warming = " << warming << " degrees.\n";
  // Access the global variable with the scope resolution operator
  cout << "But global warming = " << ::warming;
  cout << " degrees.\n";
}
