#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    double add(double x1, double x2);
    double add(double x);

    double subtract(double x1, double x2);
    double subtract(double x);

    double getResult();
private:
    double lastResult;

};

#endif // CALCULATOR_H
