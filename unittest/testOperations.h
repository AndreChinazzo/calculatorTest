#ifndef TESTCALCULATOR_H
#define TESTCALCULATOR_H

#include "../core/calculator.h"
#define BOOST_TEST_MODULE TestCalculator
#include <boost/test/included/unit_test.hpp>


/**
  * Macro definition for testing one case of the result getter.
  * @param calculatorObject Is the calculator object to be used;
  * @param expectedResult Is last result obtained in calculatorObject.
  **/
#define TEST_CACULATOR_RESULT_GETTER(calculatorObject, \
                                      expectedResult) \
{\
    double result; \
    result = calculatorObject.getResult(); \
    BOOST_CHECK_MESSAGE( result == expectedResult, \
                         "Result getter should return " \
                         << expectedResult \
                         << ", but returned " \
                         << result); \
}

/**
  * Macro definition for testing one case of the
  * addition function with two inputs.
  * @param calculatorObject Is the calculator object to be used;
  * @param firstInput Is the augend of the addition;
  * @param secondInput Is the addend of the addition;
  * @param expectedResult Is the sum of the addend to the augend.
  **/
#define TEST_ADDITION_WITH_TWO_INPUTS(calculatorObject, \
                                      firstInput, \
                                      secondInput, \
                                      expectedResult) \
{\
    double result; \
    result = calculatorObject.add(firstInput,secondInput); \
    BOOST_CHECK_MESSAGE( result == expectedResult, \
                         "Addition: " \
                         << firstInput << " + " << secondInput \
                         << " should be " \
                         << expectedResult \
                         << ", but was " \
                         << result); \
}

/**
  * Macro definition for testing one case of the
  * addition function with a single input.
  * @param calculatorObject Is the calculator object to be used;
  * @param addend Is the addend of the addition;
  * @param expectedResult Is the sum of the addend
  *        to the the last result of calculatorObject.
  **/
#define TEST_ADDITION_WITH_SINGLE_INPUT(calculatorObject, \
                                      addend, \
                                      expectedResult) \
{\
    double lastResult = calculatorObject.getResult(); \
    double result = calculatorObject.add(addend); \
    BOOST_CHECK_MESSAGE( result == expectedResult, \
                         "Addition: " \
                         << lastResult \
                         << " + " << addend \
                         << " should be " \
                         << expectedResult \
                         << ", but was " \
                         << result); \
}

/**
  * Macro definition for testing one case of the
  * subtraction function with two inputs.
  * @param calculatorObject Is the calculator object to be used;
  * @param firstInput Is the minuend of the subtraction;
  * @param secondInput Is the subtrahend of the subtraction;
  * @param expectedResult Is the difference of the minuend minus the subtrahend.
  **/
#define TEST_SUBTRACTION_WITH_TWO_INPUTS(calculatorObject, \
                                      firstInput, \
                                      secondInput, \
                                      expectedResult) \
{\
    double result; \
    result = calculatorObject.subtract(firstInput,secondInput); \
    BOOST_CHECK_MESSAGE( result == expectedResult, \
                         "Subtraction: " \
                         << firstInput << " - " << secondInput \
                         << " should be " \
                         << expectedResult \
                         << ", but was " \
                         << result); \
}

/**
  * Macro definition for testing one case of the
  * addition function with a single input.
  * @param calculatorObject Is the calculator object to be used;
  * @param addend Is the addend of the addition;
  * @param expectedResult Is the sum of the addend
  *        to the the last result of calculatorObject.
  **/
#define TEST_SUBTRACTION_WITH_SINGLE_INPUT(calculatorObject, \
                                      subtrahend, \
                                      expectedResult) \
{\
    double lastResult = calculatorObject.getResult(); \
    double result = calculatorObject.subtract(subtrahend); \
    BOOST_CHECK_MESSAGE( result == expectedResult, \
                         "Subtraction: " \
                         << lastResult \
                         << " - " << subtrahend \
                         << " should be " \
                         << expectedResult \
                         << ", but was " \
                         << result); \
}
#endif // TESTCALCULATOR_H
