CONFIG += c++11

HEADERS += core/printHelloWorld.h \
    core/calculator.h \
    unittest/testOperations.h

SOURCES += core/printHelloWorld.cpp \
    core/calculator.cpp \
    unittest/testOperations.cpp

TARGET = calculatorTest

# Newest version of Boost Library
INCLUDEPATH += /home/chinazzo/libs/boost_1_62_0
