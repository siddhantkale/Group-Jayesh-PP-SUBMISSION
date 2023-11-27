#include <iostream>

// First base class
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating" << std::endl;
    }

    void sleep() {
        std::cout << "Animal is sleeping" << std::endl;
    }
};

// Second base class
class Machine {
public:
    void start() {
        std::cout << "Machine is starting" << std::endl;
    }

    void stop() {
        std::cout << "Machine is stopping" << std::endl;
    }
};

// Derived class inheriting from both Animal and Machine
class Robot : public Animal, public Machine {
public:
    void work() {
        std::cout << "Robot is working" << std::endl;
    }
};

int main() {
    Robot myRobot;

    // Access methods from the first base class (Animal)
    myRobot.eat();
    myRobot.sleep();

    // Access methods from the second base class (Machine)
    myRobot.start();
    myRobot.stop();
  
    myRobot.work();

    return 0;
}
