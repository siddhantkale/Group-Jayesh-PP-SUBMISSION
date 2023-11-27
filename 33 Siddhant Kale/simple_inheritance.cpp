#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating" << std::endl;
    }

    void sleep() {
        std::cout << "Animal is sleeping" << std::endl;
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();
    myDog.sleep();
    // Access method from the derived class
    myDog.bark();

    return 0;
}
