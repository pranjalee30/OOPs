#include <bits/stdc++.h> 
using namespace std;
/*
  Run Time Polymorphism:- Runtime Polymorphism in C++ refers to the ability to resolve method calls at runtime rather than at compile time.
  (Dynamic Polymorphism)  This is primarily achieved through virtual functions and inheritance, where the decision about which method to
                          invoke depends on the object type at runtime, not the reference or pointer type.
  
  Function Overriding Example: Here we have two classes, Parent and Child, where the child class overrides a function from the parent class.
  
    Overriding:- When a derived class provides a specific implementation of a function already defined in the base class.
    Overloading:- Same function name with different parameters.
*/

class Parent {
  public: 
    // Base class function that can be overridden
     void getInfo(){
        cout << "Parent Class" << endl;  // Prints "Parent Class"
     }
};

class Child : public Parent {
     public:
     // Overriding the base class method in the derived class
     void getInfo(){
          cout << "Child Class" << endl;  // Prints "Child Class"
     }
};

int main()
{
  // Creating an object of the derived class Child
  Child C1;
  C1.getInfo();  // This will call the getInfo() method of the Child class, printing "Child Class"
  
  // Creating an object of the base class Parent
  Parent P1;
  P1.getInfo();  // This will call the getInfo() method of the Parent class, printing "Parent Class"
 
 return 0;
}
