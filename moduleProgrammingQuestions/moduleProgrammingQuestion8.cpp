#include "moduleProgrammingQuestion8.h"

/*******************************************
----- MODULE_PROGRAMMING_QUESTION_8---------
********************************************/
// Stadium Seating
// There are three seating categories at a stadium. For a softball game, Class A seats
// cost $15, Class B seats cost $12, and Class C seats cost $9. Design a modular pro-
// gram that asks how many tickets for each class of seats were sold, and then dis-
// plays the amount of income generated from ticket sales.

int getClassA_Price()
{
    return 15;
}

int getClassB_Price()
{
    return 12;
}

int getClassC_Price()
{
    return 9;
}

double calculateTotalClassA(double classA)
{
    return classA * getClassA_Price();
}

double calculateTotalClassB(double classB)
{
    return classB * getClassB_Price();
}

double calculateTotalClassC(double classC)
{
    return classC * getClassC_Price();
}