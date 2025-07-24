#include <iostream>
#include <iomanip>
#include "moduleProgrammingQuestions/moduleProgrammingQuestion1.h"
#include "moduleProgrammingQuestions/moduleProgrammingQuestion2.h"
#include "moduleProgrammingQuestions/moduleProgrammingQuestion3.h"
#include "moduleProgrammingQuestions/moduleProgrammingQuestion4.h"
#include "moduleProgrammingQuestions/moduleProgrammingQuestion5.h"
#include "moduleProgrammingQuestions/moduleProgrammingQuestion6.h"
#include "moduleProgrammingQuestions/moduleProgrammingQuestion7.h"
#include "moduleProgrammingQuestions/moduleProgrammingQuestion8.h"
#include "moduleProgrammingQuestions/moduleProgrammingQuestion9.h"
#include "moduleProgrammingQuestions/moduleProgrammingQuestion10.h"

int main()
{
    int choice;
    std::cout << std::fixed << std::setprecision(2);
    do
    {
        std::cout << "\n=========== MODULAR PROGRAMMING MENU ===========\n";
        std::cout << "1. Kilometer Converter\n";
        std::cout << "2. Sales Tax Calculator\n";
        std::cout << "3. Property Insurance Estimator\n";
        std::cout << "4. Automobile Costs\n";
        std::cout << "5. Property Tax Calculator\n";
        std::cout << "6. BMI Calculator\n";
        std::cout << "7. Nutritionist's Calorie Calculator\n";
        std::cout << "8. Stadium Tickets Estimator\n";
        std::cout << "9. Paint Job Estimator.\n";
        std::cout << "10. Monthly Sales Tax Report\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice < 0)
        {
            std::cout << "Please enter a non-negative value.\n";
            continue;
        }

        std::cin.ignore(); // clear newline left in buffer
        std::cout << "\n";

        switch (choice)
        {
        case 1:
        {
            /*******************************************
            ----- MODULE_PROGRAMMING_SOLUTION_1--------
            ********************************************/
            std::cout << "Enter a distance (kilometers): ";
            double distanceInKilometers;
            std::cin >> distanceInKilometers;

            double conversionResults = convertKilometerToMeters(distanceInKilometers);

            std::cout << distanceInKilometers << "km is " << conversionResults << " miles.\n";
            break;
        }
        case 2:
        {
            /*******************************************
            ----- MODULE_PROGRAMMING_SOLUTION_2--------
            ********************************************/
            double purchaseAmount;

            std::cout << "Enter the amount of a purchase: ";
            std::cin >> purchaseAmount;

            double statesSalesTax = calculateStatesSalesTax(purchaseAmount);
            double statesCountyTax = calculateStatesCountyTax(purchaseAmount);
            double salesTax = totalSalesTax(purchaseAmount);
            double totalSales = totalSale(purchaseAmount);

            std::cout << "The amount of the purchase: $" << purchaseAmount;
            std::cout << "\nThe state sales tax: $" << statesSalesTax;
            std::cout << "\nThe county sales tax: $" << statesCountyTax;
            std::cout << "\nThe total sales tax: $" << salesTax;
            std::cout << "\n\nTherefore the total of the sale is $" << totalSales << "\n";
            break;
        }
        case 3:
        {
            /*******************************************
            ----- MODULE_PROGRAMMING_SOLUTION_3--------
            ********************************************/
            double replacementCost;

            std::cout << "Enter the replacement cost of a building: ";
            std::cin >> replacementCost;

            double minimumInsurance = calculateMinimumInsurance(replacementCost);
            std::cout << "The minimum amount of insurance you should buy is: " << minimumInsurance << "\n";
            break;
        }
        case 4:
        {
            /*******************************************
            ----- MODULE_PROGRAMMING_SOLUTION_4-----------
            ********************************************/

            std::cout << "Welcome to the Automobile Costs program!\n";
            std::cout << "Please enter the following monthly costs:\n";

            double loanPayment = getLoanPayment();
            double insurance = getInsurance();
            double gas = getGas();
            double oil = getOil();
            double tires = getTires();
            double maintenance = getMaintenance();

            double totalMonthlyCost = calculateTotalMonthlyCost(loanPayment, insurance, gas, oil, tires, maintenance);
            double totalAnnualCost = calculateTotalAnnualCost(totalMonthlyCost);

            std::cout << "The total monthly cost of these expenses is: $" << totalMonthlyCost << "\n";
            std::cout << "The total annual cost of these expenses is: $" << totalAnnualCost << "\n";
            std::cout << "Thank you for using the Automobile Costs program.\n";
            break;
        }
        case 5:
        {
            /*******************************************
            ----- MODULE_PROGRAMMING_SOLUTION_5-----------
            ********************************************/
            double actualValue;
            std::cout << "Enter the actual value of the property: ";
            std::cin >> actualValue;

            double assessmentValue = getAssessmentValue(actualValue);
            double propertyTax = calculatePropertyTax(actualValue);
            std::cout << "Assessment Value: $" << assessmentValue << "\n";
            std::cout << "Property Tax: $" << propertyTax << "\n";
            std::cout << "Thank you for using the Property Tax Calculator.\n";
            break;
        }
        case 6:
        {
            /*******************************************
            ----- MODULE_PROGRAMMING_SOLUTION_6-----------
            ********************************************/
            double weight = getWeight();
            double height = getHeight();
            double bmi = calculateBMI(weight, height);
            std::cout << "Your Body Mass Index (BMI) is: " << bmi << "\n";
            break;
        }
        case 7:
        {
            /*******************************************
            ----- MODULE_PROGRAMMING_SOLUTION_7-----------
            ********************************************/
            double fatGrams, carbGrams;
            std::cout << "Welcome to the Nutritionist's Calorie Calculator!\n";
            std::cout << "Please enter the number of fat grams consumed in a day.\n";
            std::cin >> fatGrams;
            std::cout << "Please enter the number of carbohydrate grams consumed in a day.\n";
            std::cin >> carbGrams;

            double caloriesFromFat = calculateCaloriesFromFat(fatGrams);
            double caloriesFromCarbs = calculateCaloriesFromCarbs(carbGrams);

            std::cout << "Calories from Fat: " << caloriesFromFat << "\n";
            std::cout << "Calories from Carbs: " << caloriesFromCarbs << "\n";
            break;
        }
        case 8:
        {
            /*******************************************
            ----- MODULE_PROGRAMMING_SOLUTION_8-----------
            ********************************************/
            int classA, classB, classC;
            std::cout << "Welcome to the Stadium Tickets Estimator\n";
            std::cout << "Please How many class A tickets were sold: ";
            std::cin >> classA;
            std::cout << "Please How many class B tickets were sold: ";
            std::cin >> classB;
            std::cout << "Please How many class C tickets were sold: ";
            std::cin >> classC;

            double totalClassA = calculateTotalClassA(classA);
            double totalClassB = calculateTotalClassB(classB);
            double totalClassC = calculateTotalClassC(classC);

            std::cout << "\nTotal Class A Revenue: $" << totalClassA << "\n";
            std::cout << "Total Class B Revenue: $" << totalClassB << "\n";
            std::cout << "Total Class C Revenue: $" << totalClassC << "\n";
            break;
        }
        case 9:
        {
            /*******************************************
            ----- MODULE_PROGRAMMING_SOLUTION_9-----------
            ********************************************/

            std::cout << "Welcome to the Paint Job Estimator.\n";
            double squareFeet;
            std::cout << "\nPlease enter the square feet of wall space to be painted: ";
            std::cin >> squareFeet;
            double pricePerGallon;
            std::cout << "Please enter the price of the paint per gallon: ";
            std::cin >> pricePerGallon;

            double gallons = calculateGallonsOfPaint(squareFeet);
            double hours = calculateHoursOfLabor(gallons);
            double paintCost = calculateCostOfPaint(gallons, pricePerGallon);
            double laborCharges = calculateLaborCharges(hours);
            double totalCost = calculateTotalCost(paintCost, laborCharges);

            std::cout << "\nGallons of Paint Required: " << gallons << "\n";
            std::cout << "Hours of Labor Required: " << hours << "\n";
            std::cout << "Cost of Paint: $" << paintCost << "\n";
            std::cout << "Labor Charges: $" << laborCharges << "\n";
            std::cout << "Total Cost of Paint Job: $" << totalCost << "\n";

            break;
        }
        case 10:
        {
            /*******************************************
            ----- MODULE_PROGRAMMING_SOLUTION_10-----------
            ********************************************/

            std::cout << " Welcome to the Monthly Sales Tax Report.\n";
            double totalSales;
            std::cout << "Please enter the total sales for the month: ";
            std::cin >> totalSales;

            double countyTax = calculateCountyTax(totalSales);
            double stateTax = calculateSalesTax(totalSales);
            double totalTax = getTotalTax(totalSales);

            std::cout << "County Sales Tax: $" << countyTax << "\n";
            std::cout << "State Sales Tax: $" << stateTax << "\n";
            std::cout << "Total Sales Tax: $" << totalTax << "\n";

            break;
        }
        case 0:
            std::cout << "Exiting program... Goodbye!\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
