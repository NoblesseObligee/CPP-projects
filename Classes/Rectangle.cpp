
#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(){
    length = 0.0;
    width = 0.0;
}

Rectangle::Rectangle(float Length, float Width){
    length = Length;
    width = Width;
}


void Rectangle::setLength(float Length){
    bool lengthChecker  = true;
    do{
    if(Length == 0){
        cout << "\nLength can't be zero!!! \nEnter a valid value for length: ";
        cin >> Length;
    } else if (Length < 0){
        cout << "\nLength can't be a negative number!!! \n Enter a valid value for length: ";
        cin >> Length;
    }
    else{
        length = Length;
        lengthChecker  = false;
    }
} while(lengthChecker);

}

 void Rectangle::setWidth(float Width){

    bool widthChecker  = true;
    do{
    if(Width  == 0){
        cout << "\nWidth can't be zero!!! \nEnter a valid value for width: ";
        cin >> Width;
    } else if (Width < 0){
        cout << "\nWidth can't be a negative number!!! \n Enter a valid value for width: ";
        cin >> Width;
    }
    else{
        width = Width;
        widthChecker  = false;
    }
} while(widthChecker);
}

float Rectangle::getLength(){
    return length;
}

float Rectangle::getWidth(){
    return width;
}

float Rectangle::calculateArea(){
    return length * width;
}
