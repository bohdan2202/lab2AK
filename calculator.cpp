#include "calculator.h"

//add func
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

//sub func
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

//mul func
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

//calculator
//add sub mul