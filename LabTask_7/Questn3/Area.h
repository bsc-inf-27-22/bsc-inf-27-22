//#pragma once
#include "Circle2.h"
#include "Square.h"
#include "Triangle.h"

using namespace shapes;

class Area
{
public:
    static double GetAreaOfSquare(Square newSquare);

    static double GetAreaOfTriangle(Circle2 newTriangle);

    static double GetAreaOfCircle(Triangle newCircle);

};
