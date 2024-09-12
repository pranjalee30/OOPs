#include <bits/stdc++.h> 
using namespace std;

/*
  Mode of Inheritance
                 | Derived Class   |  Derived Class    |   Derived Class
    Base Class   | Private Mode    |  Protected Mode   |   Public Mode
    Private      | Not Inherited   |  Not Inherited    |   Not Inherited
    Protected    |   Private       |    Protected      |    Protected
    Public       |   Private       |    Protected      |    Public

  Types of Inheritance :-
  
  Single Inheritance :-  
                       Class A
                          |
                       Class B:A
*/
class Person {
    public:
      double salary;
};

class Student: public Person {
  public:
    string name;
    int rollno;
};

/*
  Multilevel Inheritance :-
                        Class A
                          |
                       Class B:A
                          |
                       Class C:B
*/
class PersonBase {
    public:
     int age;
};

class StudentBase: public PersonBase {
  public:
     string name;
     int rollno;
};

class PhdStudent: public StudentBase {
  public:
     bool IsDoingResearch;
};

/*
  Multiple Inheritance :-
            Class A    Class B
                 \     /
                 Class C
*/
class StudentMulti {
  public:
     string name;
     int rollno;
};

class Teacher {
   public:
    string sub;
    double salary;
};

class TA: public StudentMulti, public Teacher {
   public:
    string ResearchArea;
};

int main() {
    // Examples to show usage
    Student s;
    s.name = "John Doe";
    s.rollno = 123;
    s.salary = 50000.0; // From Person base class
    
    cout << "Student Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollno << endl;
    cout << "Salary: " << s.salary << endl;

    PhdStudent phd;
    phd.name = "Alice";
    phd.rollno = 456;
    phd.IsDoingResearch = true;
    
    cout << "PhD Student Name: " << phd.name << endl;
    cout << "Roll Number: " << phd.rollno << endl;
    cout << "Doing Research: " << (phd.IsDoingResearch ? "Yes" : "No") << endl;

    TA ta;
    ta.name = "Bob";
    ta.rollno = 789;
    ta.salary = 60000.0;
    ta.sub = "Math";
    ta.ResearchArea = "Algebra";

    cout << "TA Name: " << ta.name << endl;
    cout << "Roll Number: " << ta.rollno << endl;
    cout << "Salary: " << ta.salary << endl;
    cout << "Subject: " << ta.sub << endl;
    cout << "Research Area: " << ta.ResearchArea << endl;

    return 0;
}
