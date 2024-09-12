#include <bits/stdc++.h> 
using namespace std;
 //Inheritence :- whem properties and member function of base class are passed on to the derived class.


 // Order :- constructor(parent - child);
 //          destructor(child - parent);

 // If we make our own constructor then we have to call it.
 class Person{
    public:
     string name;
     int age;

    //  Person(string name, int age){
    //      this->name = name;
    //      this->age = age;
    //  }
     Person(string name, int age){
          this->name = name;
          this->age = age;
     }
 };
 class Student : public Person  {
    public:
    int rollno;
     // If we make our own constructor then we have to call it.
     Student(string name, int age, int rollno) : Person(name,age){
           this->rollno = rollno;
     }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"RollNo: "<<rollno<<endl;
    }

 };

int main()
{
    Student s1("Rahul",23,4);
    
    s1.getInfo();
 
 
 return 0;
}