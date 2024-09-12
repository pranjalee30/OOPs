#include <bits/stdc++.h> 
using namespace std;
 // Destructor :- opposite of constructor i.e. deallocate the memory 
 // if we allocate memory by dynamic object (new keyword) then we have to delete it with (delete keyword),it can't be default.
 // Dynamic Memory Allocation: Use new to allocate memory dynamically and delete to free it.
 // Destructor: Always define a destructor when dynamically allocating memory to avoid memory leaks.
 // Memory Management: Proper memory management is crucial in C++ to prevent leaks and maintain program efficiency.
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

    ~Student(){}
    // Destructor to free dynamically allocated memory
    ~Student() {
        delete cgpaPtr;  // Free the allocated memory (if not done then memory may be leaked)
    }

    // Method to print student info
    void getInfo() const {
        cout << "NAME: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main()
{
 
 
 
 return 0;
}