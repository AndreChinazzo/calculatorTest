CONFIG += c++11

HEADERS += core/printHelloWorld.h \
    unittest/testCalculator.h
HEADERS += core/calculator.h

SOURCES += core/printHelloWorld.cpp
SOURCES += core/calculator.cpp
SOURCES += unittest/testCalculator.cpp

TARGET = coco

# Newest version of Boost Library
INCLUDEPATH += /home/chinazzo/libs/boost_1_62_0
