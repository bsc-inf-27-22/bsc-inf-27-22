#include "Area.h"
#include <cmath>

using namespace shapes;

    double Area::GetAreaOfSquare(Square newSquare){
        return newSquare.GetLength() * newSquare.GetLength();
    }
     double Area::GetAreaOfCircle(Circle2 newCircle){
        return newCircle.GetRadius() * newCircle.GetRadius() * 3.142; 
    }
    double Area::GetAreaOfTriangle(Triangle newTriangle){
        return (newTriangle.GetBase() * newTriangle.GetHeight()) / 2 ;
      
    }
    

