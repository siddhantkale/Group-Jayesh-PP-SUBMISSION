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

// Further derived class inheriting from Dog
class GermanShepherd : public Dog {
public:
    void guard() {
        std::cout << "German Shepherd is guarding" << std::endl;
    }
};

int main() {
    GermanShepherd myDog;

    // Access methods from the base class
    myDog.eat();
    myDog.sleep();

    // Access methods from the first derived class
    myDog.bark();
    myDog.guard();

    return 0;
}
