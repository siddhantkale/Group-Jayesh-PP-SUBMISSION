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

// First derived class inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking" << std::endl;
    }
};

// Second derived class inheriting from Animal
class Cat : public Animal {
public:
    void meow() {
        std::cout << "Cat is meowing" << std::endl;
    }
};

int main() {
    // Create objects of the derived classes
    Dog myDog;
    Cat myCat;

    // Access methods from the base class (Animal)
    myDog.eat();
    myDog.sleep();

    myCat.eat();
    myCat.sleep();

    // Access methods from the first derived class (Dog)
    myDog.bark();

    // Access methods from the second derived class (Cat)
    myCat.meow();

    return 0;
}
