#include "moduleProgrammingQuestion5.h"

/*******************************************
----- MODULE_PROGRAMMING_QUESTION_5-----------
********************************************/
    // Property Tax
    // A county collects property taxes on the assessment value of property, which is
    // 60 percent of the property’s actual value. For example, if an acre of land is valued
    // at $10,000, its assessment value is $6,000. The property tax is then 64¢ for each
    // $100 of the assessment value. The tax for the acre assessed at $6,000 will be
    // $38.40. Design a modular program that asks for the actual value of a piece of
    // property and displays the assessment value and property tax.


double getAssessmentFactor() {
    return 0.60;
}
double getAssessmentValue(double actualValue) {
    return actualValue * getAssessmentFactor(); // 60% of the actual value
}
double getPropertyTax(double assessmentValue) {
    return (assessmentValue / 100) * 0.64; // 64¢ for each $100 of assessment value
}
double calculatePropertyTax(double actualValue) {
    double assessmentValue = getAssessmentValue(actualValue);
    double propertyTax = getPropertyTax(assessmentValue);
    return propertyTax;
}