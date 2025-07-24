#include "moduleProgrammingQuestion3.h"


/*******************************************
----- MODULE_PROGRAMMING_QUESTION_3--------
********************************************/
/*
    3. How Much Insurance?
    Many financial experts advise that property owners should insure their homes or
    buildings for at least 80 percent of the amount it would cost to replace the struc-
    ture. Design a modular program that asks the user to enter the replacement cost of
    a building and then displays the minimum amount of insurance he or she should
    buy for the property.
*/
   double getInsuranceFactor(){
       return 0.8;
   }
   double calculateMinimumInsurance(double replacementCost){
       return replacementCost * getInsuranceFactor();
   }
