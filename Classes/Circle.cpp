
#include "Circle.h"
#include <iostream>
#include <cmath>
using namespace std;


Shapes::Circle::Circle(){
    radius = 1;
}

Shapes::Circle::Circle(float Radius){
   radius = Radius;
}


void Shapes::Circle::setRadius(float newRadius){
    bool radiusChecker  = true;
    do{
    if(newRadius == 0){
        cout << "\nRadius can't be zero!!! \nEnter a valid value for radius: ";
        cin >> newRadius;
    } else if (newRadius < 0){
        cout << "Radius can't be a negative number!!! \n Enter a valid value for radius: ";
        cin >> newRadius;
    }
    else{
        radius = newRadius;
        radiusChecker = false;
    }
} while(radiusChecker);

}

float Shapes::Circle::getRadius(){
    return radius;
}


float Shapes::Circle::calculateArea(){
    float area = ((M_PI) * pow(radius, 2));
    return area;
}
Shapes::Circle::~Circle(){}