#include "moduleProgrammingQuestion10.h"

/*******************************************
----- MODULE_PROGRAMMING_QUESTION_10---------
********************************************/
// Monthly Sales Tax
// A retail company must file a monthly sales tax report listing the total sales for the
// month, and the amount of state and county sales tax collected. The state sales tax
// rate is 4 percent and the county sales tax rate is 2 percent. Design a modular pro-
// gram that asks the user to enter the total sales for the month. From this figure, the
// application should calculate and display the following:
// ● The amount of county sales tax
// ● The amount of state sales tax
// ● The total sales tax (county plus state)
// In the pseudocode, represent the county tax rate (0.02) and the state tax rate (0.04)
// as named constants.

double getSalesTaxFactor(){
    return 0.04;
}
double getCountyTaxFactor(){
    return 0.02;
}

double calculateSalesTax(double totalAmountGain){
    return totalAmountGain * getSalesTaxFactor();
}
double calculateCountyTax(double totalAmountGain){
    return totalAmountGain * getCountyTaxFactor();
}

double getTotalTax(double totalAmountGain){
    return calculateSalesTax(totalAmountGain) + calculateCountyTax(totalAmountGain);
}