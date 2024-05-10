#include "Circle2.h"
using namespace std;

Shapes::Circle2::Circle2(){
    radius = 1;
}
Shapes::Circle2::Circle2(double newRadius){
    radius = newRadius;
}
double Shapes::Circle2::GetRadius(){
    return radius;
}
Shapes::Circle2::~Circle2(){

}