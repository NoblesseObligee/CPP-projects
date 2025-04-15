
#include "Triangle.h"
#include <iostream>
using namespace std;

Shapes::Triangle::Triangle(){
    base = 1;
    height = 1;
}

Shapes::Triangle::Triangle(float Base, float Height){
    base = Base;
}


void Shapes::Triangle::setBase(float newBase){
    bool baseChecker  = true;
    do{
    if(newBase == 0){
        cout << "\nLength can't be zero!!! \nEnter a valid value for length: ";
        cin >> newBase;
    } else if (newBase < 0){
        cout << "Base can't be a negative number!!! \n Enter a valid value for base: ";
        cin >> newBase;
    }
    else{
        base = newBase;
        baseChecker  = false;
    }
} while(baseChecker);

}

 void Shapes::Triangle::setHeight(float newHeight){

    bool heightChecker  = true;
    do{
    if(newHeight  == 0){
        cout << "\nHeight can't be zero!!! \nEnter a valid value for height: ";
        cin >> newHeight;
    } else if (newHeight < 0){
        cout << "Height can't be a negative number!!! \n Enter a valid value for height: ";
        cin >> newHeight;
    }
    else{
      height = newHeight;
       heightChecker = false;
    }
} while(heightChecker);
}

float Shapes::Triangle::getBase(){
    return base;
}

float Shapes::Triangle::getHeight(){
    return height;
}

float Shapes::Triangle::calculateArea(){
    return ((base * 0.5) * height);
}
Shapes::Triangle::~Triangle(){
    
}