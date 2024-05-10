#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(){
    length = 0;
    width = 0;
}
float Rectangle::GetArea(float x, float y){
    return x * y;
}
void Rectangle::SetValues(float x, float y){
    length = x;
    width = y;
}
Rectangle::~Rectangle(){
    
};