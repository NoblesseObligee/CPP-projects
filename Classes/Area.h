
#pragma once
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"

class Area{
    public:
        static double CalculateAreaOfSquare(Shapes::Square square);
        static double CalculateAreaOfTriangle(Shapes::Triangle triangle);
        static double CalculateAreaOfCircle(Shapes::Circle circle);

};

