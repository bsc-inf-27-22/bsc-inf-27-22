#include "circle.h"
circle::circle(){
    radius = 1;
}
circle::circle1(double newRadius){
 radius = newRadius;
}
double circle::getArea(){
    return radius * radius * 3.14159;
}