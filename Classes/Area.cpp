
#include "Area.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"



double Area::CalculateAreaOfSquare(Shapes::Square square){
    return square.getSideLength() * square.getSideLength();

}

double Area::CalculateAreaOfTriangle(Shapes::Triangle triangle){
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

double Area::CalculateAreaOfCircle(Shapes::Circle circle){
    const float PI = 3.14159f;
    return PI * circle.getRadius() * circle.getRadius();
}

