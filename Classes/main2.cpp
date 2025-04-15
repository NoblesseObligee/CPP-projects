#include <iostream>
#include <string>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
using namespace Shapes;
using namespace std;


int main (){
    bool condition = true;
    short choice;

    do{
       
        cout << "1. Calculate the area of square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle"<< endl;
        cout << "4. Quit" << endl;
        cout << "Select your choice: ";
        cin >> choice;

        if(choice == 1 ){
            Square square = Square();
            
            float side;

            cout << "\nEnter the value for the side Length of the square: ";
            cin >> side;
            square.setSideLength(side);

            cout << "\nThe area of a square of side length: " << square.getSideLength() << " is " << square.calculateArea()<< "\n"<< endl;

        } 
        else if (choice == 2 ){
           Triangle triangle = Triangle();

            float base;
            float height;
        
            cout << "\nEnter the value for the base of the triangle: ";
            cin >> base;
            triangle.setBase(base);
        
            cout << "Enter the value for the height of the triangle: ";
            cin >> height;
            triangle.setHeight(height);
        
            cout << "The area of the a triangle of base: " << triangle.getBase() << " and width: " << triangle.getHeight() << " is " << triangle.calculateArea()<<"\n" <<endl;
        
        }
        else if (choice == 3 ){
            Circle circle = Circle();

            float radius;
           
            cout << "Enter the value for the radius of the circle: ";
            cin >> radius;
            circle.setRadius(radius);
        
            cout << "The area of the circle of radius: " << circle.getRadius() << " is " << circle.calculateArea()<< "\n"<<endl;
        
        }
        else if(choice == 4 ){
            cout << "\nExiting the program...... \n Successfully exited the program!!!!" << endl;
            condition = false;
        }

    } while(condition);
}
