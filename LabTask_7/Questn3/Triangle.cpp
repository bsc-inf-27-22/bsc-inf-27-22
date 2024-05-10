#include "Triangle.h"
using namespace std;
Shapes::Triangle::Triangle(){
    base = 0;
    height = 0;
}
Shapes::Triangle::Triangle(double newBase, double newHeight){
    base = newBase;
    height = newHeight;
}
double Shapes::Triangle::GetBase(){
    return base;
}
double Shapes::Triangle::GetHeight(){
    return height;
}
Shapes::Triangle::~Triangle(){

}
