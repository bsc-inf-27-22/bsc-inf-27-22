#include "Square.h"
using namespace std;

Shapes::Square::Square(){
    length = 0;
}
Shapes::Square::Square(double newLength){
    length = newLength;
}
double Shapes::Square::GetLength(){
    return length;
}
Shapes::Square::~Square(){

}