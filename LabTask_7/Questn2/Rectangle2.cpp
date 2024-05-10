#include "Rectangle2.h"
using namespace std;

Rectangle2::Rectangle2(float newLength, float newWidth){
    length = newLength;
    width = newWidth;
}
float Rectangle2::GetArea(float x, float y){
    return x * y;
}
Rectangle2::~Rectangle2(){

}