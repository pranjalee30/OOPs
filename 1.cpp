#include <bits/stdc++.h> 
using namespace std;

// Objects is the instance of class. An entity of the real world-object.
// Ex:- Students in the class are considered as an object.
// Class is blueprint of object or collection of objects or group of objects.
// Ex:- Classroom is a class where different type of students(objects).

class Teacher{
    // Protected member only have access inside the class and in the derived class.
    protected:
    // Private member only have access inside the class.It is default access specifiers.
    private:  
    // Public member  have access anywhere. 
     double salary;   // Private member variable for encapsulation
    public:
      // properties/attributes
      string name;
      string dept;
      string subject;
      

      //methods /member functions
    //    setter
      void set_salary(double s){
        salary=s;
      }
    //   getter
      double get_salary(){
        return salary;
      }
      void changeDept(string newDept){
        dept = newDept;
      }
}; 
int main()
{
    Teacher t1;
    t1.name="Shradha";
    t1.subject="C++";
    t1.dept="CSE";
    t1.set_salary(25000);
    cout<<t1.get_salary()<<endl;
  return 0;
}