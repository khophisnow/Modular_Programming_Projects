#ifndef MODULE_PROGRAMMING_QUESTION_9_H
#define MODULE_PROGRAMMING_QUESTION_9_H

double getConstantGallonsPerSquareFoot();
double getConstantHoursPerGallons();
double getConstantLaborRate();
double calculateGallonsOfPaint(double squareFeet);
double calculateHoursOfLabor(double gallons);
double calculateCostOfPaint(double gallons, double pricePerGallon);
double calculateLaborCharges(double hours);
double calculateTotalCost(double paintCost, double laborCharges);

#endif
