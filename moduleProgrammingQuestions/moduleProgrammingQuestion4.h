#ifndef MODULE_PROGRAMMING_QUESTION_4_H
#define MODULE_PROGRAMMING_QUESTION_4_H

double getLoanPayment();
double getInsurance();
double getGas();
double getOil();
double getTires();
double getMaintenance();
double calculateTotalMonthlyCost(double loanPayment, double insurance, double gas, double oil, double tires, double maintenance);
double calculateTotalAnnualCost(double monthlyCost);

#endif
