#include "Box.h"

Box::Box(){
    length = 0.0;
    breadth = 0.0;
    heigth = 0.0;
}
Box::Box(const double newLength, const double newBreadth, const double newHeight){
    length = newLength;
    breadth = newBreadth;
    heigth = newHeight;
}
Box::~Box(){

}
double Box::GetVolume(){
    return length * breadth * heigth;
}
void Box::SetLength(double len){
     length = len;
}
void Box::SetBreadth(double bre){
      breadth = bre;
}
void Box::SetHeight(double hei){
      heigth = hei;
}
/*Box Box::operator+(const Box& b){
    Box Box;
    Box.length = this->length + b.length;
    Box.breadth = this->breadth + b.breadth;
    Box.heigth = this->heigth + b.heigth;
    return Box;
}*/