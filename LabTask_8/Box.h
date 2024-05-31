#include <iostream>
using namespace std;

class Box
{

   
public:
    Box();
    ~Box();
    Box(const double newLength, const double newBreadth, const double newHeight);
    double GetVolume();
    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);
    Box operator+(double Box& b);
private:
    double length;
    double breadth;
    double heigth;
};

