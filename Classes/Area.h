
#pragma once
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"

class Area{
    public:
        static double CalculateAreaOfSquare(const Shapes::Square& square);
        static double CalculateAreaOfTriangle(const Shapes::Triangle& triangle);
        static double CalculateAreaOfCircle(const Shapes::Circle& circle);

};

