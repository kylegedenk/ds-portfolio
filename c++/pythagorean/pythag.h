#pragma once

class Triangle {
public:
    double calculateHypotenuse();
    void setSideA(double sideA);
    void setSideB(double sideB);

private:
    double sideA_;
    double sideB_;
};

