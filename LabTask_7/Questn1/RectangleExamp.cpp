
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    float x;
    float y;
    Rectangle rectangle1;
    cout <<"Enter the value of lenth:"<<endl;
    cin >> x;
    cout <<"Enter the value of width:"<<endl;
    cin >> y;
    rectangle1.SetValues(x, y);
    cout <<"The area of rectangle is: " << rectangle1.GetArea(x, y) <<endl;
    return 0;
}