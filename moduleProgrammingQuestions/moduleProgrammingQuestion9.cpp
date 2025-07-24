#include "moduleProgrammingQuestion10.h"

/*******************************************
----- MODULE_PROGRAMMING_QUESTION_10---------
********************************************/

// Paint Job Estimator
// A painting company has determined that for every 115 square feet of wall space,
// one gallon of paint and eight hours of labor will be required. The company charges
// $20.00 per hour for labor. Design a modular program that asks the user to enter
// the square feet of wall space to be painted and the price of the paint per gallon. The
// program should display the following data:
// ● The number of gallons of paint required
// ● The hours of labor required
// ● The cost of the paint
// ● The labor charges
// ● The total cost of the paint job

double getConstantGallonsPerSquareFoot()
{
    return 115.0;
}
double getConstantHoursPerGallons()
{
    return 8.0;
}
double getConstantLaborRate()
{
    return 20.0;
}

double calculateGallonsOfPaint(double squareFeet)
{
    return squareFeet / getConstantGallonsPerSquareFoot();
}
double calculateHoursOfLabor(double gallons)
{
    return gallons * getConstantHoursPerGallons();
}
double calculateCostOfPaint(double gallons, double pricePerGallon)
{
    return gallons * pricePerGallon;
}
double calculateLaborCharges(double hours)
{
    return hours * getConstantLaborRate();
}
double calculateTotalCost(double paintCost, double laborCharges)
{
    return paintCost + laborCharges;
}