#include <bits/stdc++.h> 
using namespace std;

/* 
  Constructor :- Special method invoked automatically at time of object creation. Used for initialization.
                 Same name as class.
                 Constructor doesn't have return type.
                 Only called once(automatically) at object creation.
                 Memory allocation happens when the constructor is called.

  "this" is a special pointer in C++ that points to the current object.
  this->prop  is the same as *(this).prop
*/

class Teacher {
    private:  
        // Private member, only accessible within the class.
        double salary;   

    public:
        // Public members, accessible anywhere.
        string name;
        string dept;
        string subject;

        // 1. Non-parameterized constructor
        Teacher() {
            dept = "CSE"; // Initialized to "CSE" for every teacher by default.
            cout << "Hi, I am a non-parameterized Teacher constructor" << endl;
        }

        // 2. Parameterized constructor
        Teacher(string name, string dept, string subject, double salary) {
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;
        }

        /* 
           3. Copy Constructor: Special type of constructor (custom) used to copy properties of one object to another.
        */
        Teacher(Teacher &orgObj) {
            cout << "I am the custom copy constructor" << endl;
            this->dept = orgObj.dept;
            this->name = orgObj.name;
            this->subject = orgObj.subject;
            this->salary = orgObj.salary;
        }

        // Member function to display teacher's information
        void getInfo() {
            cout << "Name: " << name << endl;
            cout << "Department: " << dept << endl;
            cout << "Subject: " << subject << endl;
            cout << "Salary: " << salary << endl;
        }
}; 

int main() {
    // Invoking the parameterized constructor
    Teacher t1("Shradha", "CSE", "OOPS", 25000);
    t1.getInfo();

    // Invoking the custom copy constructor
    Teacher t2(t1);
    t2.getInfo();

    // Invoking the non-parameterized constructor
    Teacher t3;
    t3.getInfo(); // This will print the default values (only for dept, name and salary are not set yet).

    return 0;
}
