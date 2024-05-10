#include <iostream>
#include "circle.h"
using namespace std;
int main(){
    circle circle1;
    circle circle2(25);
    cout <<" The area of circle with radius " << circle1.radius <<" is "<< 
    circle1.getArea() << endl;
    cout <<" the area of circle with radius "<< circle2.radius <<" is "<<
    circle2.getArea() << endl;
    return 0;
}