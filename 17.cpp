#include <bits/stdc++.h> 
using namespace std;
/*
  Run Time Polymorphism:- 
  Runtime Polymorphism in C++ refers to the ability to resolve method calls at runtime rather than at compile time.
  (Dynamic Polymorphism) This is primarily achieved through virtual functions and inheritance, where the decision about which method to
  invoke depends on the object type at runtime, not the reference or pointer type.
  
  Virtual Function Example: Here we have two classes, Parent and Child, where the child class overrides a virtual function from the parent class.


  Virtual Function:-
       1.Virtual Functions are dynamic in nature.
       2.Defined by eyword "virtual" insuide the base class and are alwayus declared with a base class and overriden in child class.
       3.A virtual function is called during runtime.
*/

class Parent {
  public: 
    // Base class virtual function that can be overridden
    virtual void getInfo(){
        cout << "Parent Class" << endl;  // Prints "Parent Class"
    }
};

class Child : public Parent {
  public:
    // Overriding the base class virtual function in the derived class
    void getInfo() {
        cout << "Child Class" << endl;  // Prints "Child Class"
    }
};

int main()
{
    // Creating an object of the derived class Child
    Child C1;

    C1.getInfo();

    return 0;
}
