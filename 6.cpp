#include <iostream>
using namespace std;
// Most famous question
class MyClass {
private:
    // Static member to count the number of objects
    static int objectCount;

public:
    // Constructor
    MyClass() {
        objectCount++;
    }

    // Destructor (optional, just for completeness)
    ~MyClass() {
        objectCount--;
    }

    // Static function to return the object count
    static int getObjectCount() {
        return objectCount;
    }
};

// Initialize the static member variable
int MyClass::objectCount = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    cout << "Number of objects created: " << MyClass :: getObjectCount() << endl;

    return 0;
}
