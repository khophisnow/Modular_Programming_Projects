#include "moduleProgrammingQuestion4.h"
#include <iostream>


/*******************************************
----- MODULE_PROGRAMMING_QUESTION_4--------
********************************************/
    // 4. Automobile Costs
        // Design a modular program that asks the user to enter the monthly costs for the fol-
        // lowing expenses incurred from operating his or her automobile: loan payment, in-
        // surance, gas, oil, tires, and maintenance. The program should then display the
        // total monthly cost of these expenses, and the total annual cost of these expenses.

double getLoanPayment(){
    double loanPayment;
    std::cout << "Enter the monthly loan payment: ";
    std::cin >> loanPayment;
    return loanPayment;
}
double getInsurance(){
    double insurance;
    std::cout << "Enter the monthly insurance cost: ";
    std::cin >> insurance;
    return insurance;
}
double getGas(){
    double gas;
    std::cout << "Enter the monthly gas cost: ";
    std::cin >> gas;
    return gas;
}
double getOil(){
    double oil;
    std::cout << "Enter the monthly oil cost: ";
    std::cin >> oil;
    return oil;
}
double getTires(){
    double tires;
    std::cout << "Enter the monthly tires cost: ";
    std::cin >> tires;
    return tires;
}
double getMaintenance(){
    double maintenance;
    std::cout << "Enter the monthly maintenance cost: ";
    std::cin >> maintenance;
    return maintenance;
}

double calculateTotalMonthlyCost(double loanPayment, double insurance, double gas, double oil, double tires, double maintenance){
    return loanPayment + insurance + gas + oil + tires + maintenance;
}
double calculateTotalAnnualCost(double monthlyCost){
    return monthlyCost * 12;
}
