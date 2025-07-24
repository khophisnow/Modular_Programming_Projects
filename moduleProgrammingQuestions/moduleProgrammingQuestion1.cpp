#include "moduleProgrammingQuestion1.h"

/*******************************************
----- MODULE_PROGRAMMING_QUESTION_1--------
********************************************/
/*
    Design a modular program that asks the user to enter a distance in kilometers, and
    then converts that distance to miles. The conversion formula is as follows:
                        Miles = Kilometers × 0.6214
*/
double conversionUnit(){
    double unit  = 0.6214;
    return unit;
}
double convertKilometerToMeters(double distanceInKilometers){
    double miles = conversionUnit();
    return distanceInKilometers * miles;
}