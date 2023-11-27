#include <iostream>

int main() {
    int integerValue = 10;
    double doubleValue = integerValue;  // Implicit conversion from int to double

    std::cout << "Integer Value: " << integerValue << std::endl;
    std::cout << "Double Value: " << doubleValue << std::endl;

    return 0;
}
