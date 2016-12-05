#include "Equation.h"
#include <iostream>

using namespace std;

int main() {

    Equation a(1.825 * pow(10, 2), 18.225, -3.298 * pow(10, -2));;

    a.solve();
    cout << a << endl;

    return 0;
}