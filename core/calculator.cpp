#include "calculator.h"

double Calculator::add(double x1, double x2)
{
    lastResult = (x1+x2);
    return lastResult;
}
double Calculator::add(double x)
{
    lastResult += x;
    return lastResult;
}


double Calculator::subtract(double x1, double x2)
{
    lastResult = (x1-x2);
    return lastResult;
}
double Calculator::subtract(double x)
{
    lastResult -= x;
    return lastResult;
}

double Calculator::getResult()
{
    return lastResult;
}
