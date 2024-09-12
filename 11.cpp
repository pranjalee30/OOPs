#include <bits/stdc++.h> 
using namespace std;
 /*
 Hybrid Inheritance :- 
          A
         / \
        B   C
         \ /
          D

          A
         / \
        B   C
       / \
      D   E
      
    Hybrid Inheritance is a combination of more than one type of inheritance.
    It typically involves the combination of hierarchical, multiple, and multilevel inheritance.
    The most common scenario is when a derived class has two base classes that are
    themselves derived from a common ancestor class, resulting in a diamond-shaped
    inheritance hierarchy.
 
 */ 

// Base class (Parent class)
class A {
public:
    void showA() {
        cout << "This is class A" << endl;
    }
};

// Derived class B from A
class B : public A {
public:
    void showB() {
        cout << "This is class B" << endl;
    }
};

// Derived class C from A
class C : public A {
public:
    void showC() {
        cout << "This is class C" << endl;
    }
};

// Derived class D from both B and C (multiple inheritance)
class D : public B, public C {
public:
    void showD() {
        cout << "This is class D" << endl;
    }
};

int main() {
    D objD;

    // To access functions from classes B and C
    objD.showD();  // Class D function
    objD.showB();  // Class B function
    objD.showC();  // Class C function

    // Ambiguity: Accessing class A's function would cause ambiguity
    // as it's inherited twice through B and C. We need to resolve it using scope resolution.
    objD.B::showA();  // Access class A via class B
    objD.C::showA();  // Access class A via class C

    return 0;
}
