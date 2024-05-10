#include <iostream>
#include "Rectangle2.h"
using namespace std;

int main(){
    float x;
    float y;
    cout<<"Enter the value of length: "<<endl;
    cin>> x;
    cout <<"Enter the value of width:"<<endl;
    cin >> y;
    Rectangle2 Rectangle3(x, y);
    cout<<" The area of the rectangle is: " << Rectangle3.GetArea(x, y)<< endl;

return 0;
}