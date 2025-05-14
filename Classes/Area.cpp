
#include "Area.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"



double Area::CalculateAreaOfSquare(const Shapes::Square& square){
    return square.getSideLength() * square.getSideLength();

}

double Area::CalculateAreaOfTriangle(const Shapes::Triangle& triangle){
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

double Area::CalculateAreaOfCircle(const Shapes::Circle& circle){
    const float PI = 3.14159f;
    return PI * circle.getRadius() * circle.getRadius();
}

