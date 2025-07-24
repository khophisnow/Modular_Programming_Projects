#include "moduleProgrammingQuestion2.h"

/*******************************************
----- MODULE_PROGRAMMING_QUESTION_2--------
********************************************/
/*
    Sales Tax Program Refactoring
    Programming Exercise 6 in Chapter 2 was the Sales Tax program. For that exercise
    you were asked to design a program that calculates and displays the county and
    state sales tax on a purchase. If you have already designed that program, refactor
    it so the subtasks are in modules. If you have not already designed that program,
    create a modular design for it.
    6. Sales Tax
    Design a program that will ask the user to enter the amount of a purchase. The
    program should then compute the state and county sales tax. Assume the state
    sales tax is 4 percent and the county sales tax is 2 percent. The program should dis-
    play the amount of the purchase, the state sales tax, the county sales tax, the total
    sales tax, and the total of the sale (which is the sum of the amount of purchase plus
    the total sales tax).
    Hint: Use the value 0.02 to represent 2 percent, and 0.04 to represent 4 percent.
*/

double getStatesSalesTaxFactor(){
    return 0.04;
}
double getStatesCountyTaxFactor(){
    return 0.02;
}
double calculateStatesSalesTax(double purchaseAmount){
    double salesTax = purchaseAmount * getStatesSalesTaxFactor();
    return salesTax;
}
double calculateStatesCountyTax(double purchaseAmount){
    double countyTax = purchaseAmount * getStatesCountyTaxFactor();
    return countyTax;
}
double totalSalesTax(double purchaseAmount){
    double total = calculateStatesSalesTax(purchaseAmount) + calculateStatesCountyTax(purchaseAmount);
    return total;
}
double totalSale(double purchaseAmount){
    double totalSale = purchaseAmount + totalSalesTax(purchaseAmount);
    return totalSale;
}
