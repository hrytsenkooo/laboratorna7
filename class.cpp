#pragma once
#include "class.h"

Function::Function(double x) {
    if (x <= 0 ) {
        throw std::invalid_argument("Error. Argument cannot be less than 0 or equal");
    }
    else if (x == 1) {
        throw std::invalid_argument("Error. Argument cannot be 1");
    }
    else if (x == 2) {
        throw std::invalid_argument("Error. Argument cannot be 2");
    }
    else if (x == 3) {
        throw std::invalid_argument("Error. Argument cannot be 3");
    }
    this->x = x;
}

double Function::calculate() {
    return std::log(x) / std::log(x - 2);
}
