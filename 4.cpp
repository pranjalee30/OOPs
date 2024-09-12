#include <bits/stdc++.h> 
using namespace std;

 /*
  Shallow Copy and Deep Copy

  1.A shallow copy of an object copies all of the member values from one object to another.It will be problematic when we allocated dynamically.
    dynamically -> with new keyword stored in heap in memory.
    
  2.A deep copy, on the other hand, not only copies the member values but also makes copies any dynamically allocated memory that the members point to.
 
 */
 class Student{
   public:
     string name;
     double *cgpaPtr;

     Student(string name, double cgpa){
        this->name=name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;

     }
     void getInfo(){
        cout<<"NAME: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
     }

 };
int main()
{
  Student s1("Pranjal",7.9);
  s1.getInfo();
//   The problem is that the cgpa of s1 is changed when we change the cgpa for s2. This will we face in shallow copy because the pointer store the address.
//   In deep copy we have to write own constructor unlike shallow.
  Student s2(s1);
  *(s2.cgpaPtr) = 9.1;
  s1.getInfo();
 return 0;
}