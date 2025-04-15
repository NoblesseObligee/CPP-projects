
#include "Rectangle.h"
#include <iostream>
using namespace std;

int main(){
    Rectangle rectangle1 = Rectangle();

    float length1;
    float width1;

    cout << "Enter the value for the length of the rectangle1: ";
    cin >> length1;
    rectangle1.setLength(length1);

    cout << "\nEnter the value for the width of the rectangle1: ";
    cin >> width1;
    rectangle1.setWidth(width1);

    cout << "\nThe area of rectangle1 of length: " << rectangle1.getLength() << " and width: " << rectangle1.getWidth() << " is " << rectangle1.calculateArea()<< endl;

    cout <<"---------------------------------------------------------------"<< "\n\n";
    float length2;
    float width2;

    cout << "Enter the value for the length of rectangle2: ";
    cin >> length2;

    cout << "Enter the value for the width of rectangle2: ";
    cin >> width2;

    Rectangle rectangle2 = Rectangle(length2, width2);
    cout << "\nThe area of rectangle2 of length: " << rectangle2.getLength() << " and width: " << rectangle2.getWidth() << " is " << rectangle2.calculateArea()<< endl;



    return 0;
}


