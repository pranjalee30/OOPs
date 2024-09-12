#include <bits/stdc++.h> 
using namespace std;
 /*
   Abstraction:-  Hiding all unnecessary(sensitive) details and showing only the important part.
                  Access Modifiers/specifires are the way to implement abstraction.

                  Using Abstract classes:-
                      Abstract  classes used to provide a base class from which other classes are derived.
                      They cannot be instantiated and are meant to be inherited.
                      Abstract classes are typically used to define an interface for derived class.
                      It can't make an object.
 */


class Shape{ // abstract class as pure virtual function used so it automatically  an abstract class.
    virtual void draw() = 0;  // pure virtual function
};

class Circle : public Shape{
    public:
     void draw(){
        cout<<"Draw a circle"<<endl;
     }
};
class Rectangle : public Shape{
    public:
     void draw(){
        cout<<"Draw a rectangle"<<endl;
     }
};
int main()
{
   Circle C1;
   C1.draw();
   Rectangle R1;
   R1.draw();
 
 
 return 0;
}