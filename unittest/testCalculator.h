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
    double result; \
    result = calculatorObject.add(addend); \
    BOOST_CHECK_MESSAGE( result == expectedResult, \
                         "Addition: " \
                         << calculatorObject.getResult() \
                         << " + " << addend \
                         << " should be " \
                         << expectedResult \
                         << ", but was " \
                         << result); \
}

#endif // TESTCALCULATOR_H
