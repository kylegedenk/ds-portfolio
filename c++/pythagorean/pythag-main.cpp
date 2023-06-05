#include <iostream>
#include "Triangle.h"

int main() {
    Triangle t;

    // Set the side lengths
    t.setSideA(3);
    t.setSideB(4);

    // Calculate and print the hypotenuse
    double hypotenuse = t.calculateHypotenuse();
    std::cout << "The hypotenuse is: " << hypotenuse << std::endl;

    return 0;
}

