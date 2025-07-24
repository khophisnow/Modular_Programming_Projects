#include <iostream>
#include "moduleProgrammingQuestion7.h"

/*******************************************
----- MODULE_PROGRAMMING_QUESTION_7---------
********************************************/
    // Calories from Fat and Carbohydrates
    // A nutritionist who works for a fitness club helps members by evaluating their diets.
    // As part of her evaluation, she asks members for the number of fat grams and car-
    // bohydrate grams that they consumed in a day. Then, she calculates the number of
    // calories that result from the fat, using the following formula:
    // Calories from Fat = Fat Grams × 9
    // Next, she calculates the number of calories that result from the carbohydrates,
    // using the following formula:
    // Calories from Carbs = Carb Grams × 4
    // The nutritionist asks you to design a modular program that will make these
    // calculations.

    double getFatGrams() {
        double fatGrams;
        std::cout << "Enter the number of fat grams consumed: ";
        std::cin >> fatGrams;
        return fatGrams;
    }

    double getCarbGrams() {
        double carbGrams;
        std::cout << "Enter the number of carbohydrate grams consumed: ";
        std::cin >> carbGrams;
        return carbGrams;
    }
    double calculateCaloriesFromFat(double fatGrams) {
        return fatGrams * 9;
    }

    double calculateCaloriesFromCarbs(double carbGrams) {
        return carbGrams * 4;
    }