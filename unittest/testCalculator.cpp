#include "testCalculator.h"

BOOST_AUTO_TEST_SUITE(calculatorTestSuite)

BOOST_AUTO_TEST_CASE( checkCalculatorOperations )
{

    Calculator myCalc;
    Calculator someoneElsesCalc;

    /// Appling tests to the addition fncionality of the Calculator class
    TEST_ADDITION_WITH_TWO_INPUTS(myCalc, 1.0, 2.0, 3.0);
    TEST_CACULATOR_RESULT_GETTER(myCalc, 3.0);

    TEST_ADDITION_WITH_TWO_INPUTS(someoneElsesCalc, 0.0, -2.0, -2.0);
    TEST_CACULATOR_RESULT_GETTER(someoneElsesCalc, -2.0);
    // Last result of "myCalc" should still be 3.0.
    TEST_CACULATOR_RESULT_GETTER(myCalc, 3.0);

    TEST_ADDITION_WITH_TWO_INPUTS(myCalc, -1.0, 0.0, -1.0);
    TEST_CACULATOR_RESULT_GETTER(myCalc, -1.0);
    TEST_ADDITION_WITH_TWO_INPUTS(myCalc, 10.0, 1.0, 11.0);
    TEST_CACULATOR_RESULT_GETTER(myCalc, 11.0);

    TEST_ADDITION_WITH_TWO_INPUTS(myCalc, 0.0, 0.0, 0.0);
    TEST_ADDITION_WITH_TWO_INPUTS(someoneElsesCalc, 0.0, -1.0, -1.0);
    TEST_CACULATOR_RESULT_GETTER(myCalc, 0.0);
    TEST_CACULATOR_RESULT_GETTER(someoneElsesCalc, -1.0);

    TEST_ADDITION_WITH_SINGLE_INPUT(myCalc, 1.0, 1.0);
    TEST_CACULATOR_RESULT_GETTER(myCalc, 1.0);
    TEST_ADDITION_WITH_SINGLE_INPUT(myCalc, 2.0, 3.0);
    TEST_CACULATOR_RESULT_GETTER(myCalc, 3.0);

    TEST_ADDITION_WITH_SINGLE_INPUT(someoneElsesCalc, 1.0, 0.0);
    TEST_CACULATOR_RESULT_GETTER(someoneElsesCalc, 0.0);
    TEST_ADDITION_WITH_SINGLE_INPUT(someoneElsesCalc, 2.0, 2.0);
    TEST_CACULATOR_RESULT_GETTER(someoneElsesCalc, 2.0);



}

BOOST_AUTO_TEST_SUITE_END()
