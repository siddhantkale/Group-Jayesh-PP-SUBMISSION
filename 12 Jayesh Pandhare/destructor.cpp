#include <iostream>

class SimpleClass {
public:
    // Constructor
    SimpleClass() {
        std::cout << "Constructor called!" << std::endl;
    }

    // Destructor
    ~SimpleClass() {
        std::cout << "Destructor called!" << std::endl;
    }

    // Member function
    void displayMessage() {
        std::cout << "Hello from SimpleClass!" << std::endl;
    }
};

int main() {
    // Creating an instance of SimpleClass invokes the constructor
    SimpleClass myObject;

    // Calling a member function of the class
    myObject.displayMessage();

    // Destructor will be called when the object goes out of scope 
    return 0;
}
