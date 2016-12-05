#include "Equation.h"
#include <iostream>

Equation::Equation(){

}

Equation::Equation(double x, double y, double z) :
            X(x), Y(y), Z(z) {

}

void Equation::solve() {
    double x = X;
    double y = Y;
    double z = Z;

    W = fabs(pow(x, y / x) - pow(y / x, 1 * 1.0 / 3)) + (y - x) * (((cos(y) - (z / (y - x)))) / (1 + pow(y - x, 2)));
}


void Equation::setX(double X) {
    Equation::X = X;
}

double Equation::getX() const {
    return X;
}


void Equation::setY(double Y) {
    Equation::Y = Y;
}

double Equation::getY() const {
    return Y;
}

void Equation::setZ(double Z) {
    Equation::Z = Z;
}

double Equation::getZ() const {
    return Z;
}

double Equation::getW() const {
    return W;
}

std::ostream&  operator<<(std::ostream& out, const Equation& obj) {
    std::cout << "X =\t" << obj.X << "\nY =\t" << obj.Y << "\nZ =\t" << obj.Z << "\nW =\t" << obj.W << std::endl;
    return out;
}