#include "pythag.h"
#include <cmath>

// Member function to calculate the hypotenuse
double Triangle::calculateHypotenuse() {
    return std::sqrt(sideA_ * sideA_ + sideB_ * sideB_);
}

// Member function to set the value of sideA
void Triangle::setSideA(double sideA) {
    sideA_ = sideA;
}

// Member function to set the value of sideB
void Triangle::setSideB(double sideB) {
    sideB_ = sideB;
}



