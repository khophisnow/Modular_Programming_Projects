#include <iostream>
#include "moduleProgrammingQuestion6.h"
/*******************************************
----- MODULE_PROGRAMMING_QUESTION_6---------
********************************************/
    // Body Mass Index
    // Design a modular program that calculates and displays a person’s body mass index
    // (BMI). The BMI is often used to determine whether a person with a sedentary
    // lifestyle is overweight or underweight for his or her height. A person’s BMI is cal-
    // culated with the following formula:
    // BMI = Weight × 703/Height^2


double getWeight() {
    double weight;
    std::cout << "Enter your weight in pounds: ";
    std::cin >> weight;
    return weight;
}

double getHeight() {
    double height;
    std::cout << "Enter your height in inches: ";
    std::cin >> height;
    return height;
}

double calculateBMI(double weight, double height) {
    return (weight * 703) / (height * height);
}