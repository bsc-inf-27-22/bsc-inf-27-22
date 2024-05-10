#include <iostream>
using namespace std;
int main(){
    int n;
    do {
        cout <<" Please select the area of the shape to calculate" << endl;
        cout << " 1. Square "<<endl;
        cout << " 2. Rectangle " <<endl;
        cout << " 3. Triangle " << endl;
        cout << " 4. Quit programm " << endl;
        cout << "\n                " << endl;
        cout << " Enter selection: "<<endl; 
          
          cin >> n;
          if (n > 4 || n < 1){ cout << " Your input was " << n << " Which is invalid input " << endl;
          cout << " Pleas enter a valid input!!" << endl;}
          cout << "\n                " << endl;
          switch (n)
          {
          case 1:
            
           { double length;
            double area;
            cout << "Enter the value of length : " << endl;
            cin >> length;
            area = length * length;
            cout << "The area of square with length " << length << " is " << area << " square metres " << endl;
          }
            break;
          case 2:  {
            double length;
            double width;
            double area;
            cout << " Enter the value of  length in metres: "<< endl;
            cin >> length;
            cout << "Enter the value of width in metres: " <<endl;
            cin >> width;
            area = length * length;
            cout << " The area of rectangle with length " << length << " and with of " << width 
            << " is " << area << " square metres" << endl;
          }
           break;
           case 3: {
            double area;
            double base;
            double h;
            cout << " Enter the value of base for the triangle " << endl;
            cin >> base;
            cout << " Enter the height "<< endl;
            cin >> h;
            area = (base * h) / 2;
            cout << " The area of triangle with base " << base << " and height " << h << " is " << area << endl;

           } break;
          
          
            
          }
     
            } while (n != 4);
  return 0;
}