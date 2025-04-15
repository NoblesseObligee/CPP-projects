
#include "Square.h"
#include <iostream>
using namespace std;


Shapes::Square::Square(){
    sideLength = 1;
}

Shapes::Square::Square(float sideLength){
   sideLength = sideLength;
}


void Shapes::Square::setSideLength(float side){
    bool lengthChecker  = true;
    do{
    if(side == 0){
        cout << "\nsideLength can't be zero!!! \nEnter a valid value for length: ";
        cin >> side;
    } else if (side < 0){
        cout << "sideLength can't be a negative number!!! \n Enter a valid value for length: ";
        cin >> side;
    }
    else{
        sideLength = side;
        lengthChecker  = false;
    }
} while(lengthChecker);

}

float Shapes::Square::getSideLength(){
    return sideLength;
}


float Shapes::Square::calculateArea(){
    return sideLength * sideLength;
}
Shapes::Square::~Square(){}