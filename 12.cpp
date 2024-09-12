#include <iostream>
using namespace std;
/*
    A static member variable in a class is shared by all instances of the class.
    It is not tied to any specific object but to the class itself.
    It exists even if no objects of the class are created, and only one copy of the static member exists.
*/
class MyClass {
public:
    static int objectCount;

    MyClass() {
        objectCount++;
    }

    static void showCount() {
        cout << "Number of objects: " << objectCount << endl;
    }
};

// Initialize static member
int MyClass::objectCount = 0;

int main() {
    MyClass obj1;
    MyClass obj2;

    MyClass::showCount();  // Access static method and variable via class name
    return 0;
}
