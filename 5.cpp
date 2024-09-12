#include <bits/stdc++.h>
using namespace std;

/*
  Shallow Copy and Deep Copy:

  1. A shallow copy of an object copies all of the member values from one object to another.
     It will be problematic when we allocate dynamically.
     Dynamically -> with new keyword, memory is stored in the heap.

  2. A deep copy, on the other hand, not only copies the member values but also makes
     copies of any dynamically allocated memory that the members point to.
 */

class Student {
public:
    string name;
    double *cgpaPtr;

    // Parameterized Constructor
    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;  // Allocate memory for cgpaPtr
        *cgpaPtr = cgpa;       // Set value of cgpa
    }

    // Deep Copy Constructor
    Student(const Student &obj) {
        cout << "Deep copy constructor called" << endl;
        this->name = obj.name;                // Copy name
        cgpaPtr = new double;                 // Allocate new memory
        *cgpaPtr = *(obj.cgpaPtr);            // Copy the value pointed by cgpaPtr
    }

    // Destructor to free dynamically allocated memory
    ~Student() {
        delete cgpaPtr;  // Free the allocated memory
    }

    // Method to print student info
    void getInfo() const {
        cout << "NAME: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Pranjal", 7.9);
    s1.getInfo();

    // Deep copy is made here
    Student s2(s1);
    *(s2.cgpaPtr) = 9.1;  // Modify s2's cgpaPtr value

    cout << "\nAfter modifying s2's CGPA:\n";
    s1.getInfo();  // Should remain unchanged
    s2.getInfo();  // Should show the modified value

    return 0;
}
