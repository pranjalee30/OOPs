#include <iostream>
using namespace std;
/*
    Dynamic memory allocation allows a class to manage memory at runtime,
    using pointers to allocate and free memory as needed.
    This is useful when you don’t know how much memory you'll need until the program runs.
*/
class DynamicArray {
private:
    int* arr;  // Pointer for dynamically allocated memory
    int size;

public:
    // Constructor to allocate memory dynamically
    DynamicArray(int n) {
        size = n;
        arr = new int[size];  // Allocate memory
        for (int i = 0; i < size; ++i) {
            arr[i] = i * 10;  // Initialize array
        }
    }

    // Destructor to free allocated memory
    ~DynamicArray() {
        delete[] arr;  // Free allocated memory
        cout << "Memory freed!" << endl;
    }

    // Function to display array
    void display() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray obj(5);  // Create object with dynamic memory
    obj.display();        // Output: 0 10 20 30 40
    return 0;
}
