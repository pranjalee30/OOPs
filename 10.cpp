#include <bits/stdc++.h>
using namespace std;

/*
  Hierarchical Inheritance:
                Parent 
                 /  \
                /    \
            Child1  Child2
*/

class Parent {
public:
    string name;
    int age;

    // Constructor for Parent
    Parent(string n, int a) : name(n), age(a) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Child1 : public Parent {
public:
    string child1SpecificAttribute;

    // Constructor for Child1
    Child1(string n, int a, string attr) : Parent(n, a), child1SpecificAttribute(attr) {}

    void displayChild1() {
        display();  // Call base class display method
        cout << "Child1 Specific Attribute: " << child1SpecificAttribute << endl;
    }
};

class Child2 : public Parent {
public:
    int child2SpecificValue;

    // Constructor for Child2
    Child2(string n, int a, int value) : Parent(n, a), child2SpecificValue(value) {}

    void displayChild2() {
        display();  // Call base class display method
        cout << "Child2 Specific Value: " << child2SpecificValue << endl;
    }
};

int main() {
    Child1 c1("Alice", 30, "Attribute for Child1");
    Child2 c2("Bob", 40, 12345);

    cout << "Child1 Information:" << endl;
    c1.displayChild1();

    cout << "\nChild2 Information:" << endl;
    c2.displayChild2();

    return 0;
}
