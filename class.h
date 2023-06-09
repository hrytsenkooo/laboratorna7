#pragma once
#include <stdexcept>
#include <cmath>

class Function {
private:
	double x;
public:
	Function(double x);
	double calculate();
};