#include <bits/stdc++.h> 
using namespace std;
 /*
  Polymorphism:- It is the ability of the obk=jects to take on different forms
                 or behave in different ways depending on the context in which they are used.
      
      1. Compile Time Polymorphism
      2. Run Time Polymorphism 
 */
class Student {
  public: 
    string name;
     Student(){
        cout<<"Non- Parameterised Constructor"<<endl;
     }
     Student(string name){
        this->name = name;
        cout<<"Parameterised Constructor"<<endl;
     }
};
int main()
{ 
    // Compile Time Polymorphism :  
      // Ex:- Constructor Overloading.
    Student S1; // Non- Parameterised Constructor
    Student S2("Prince");// Parameterised Constructor
      
 
 
 return 0;
}