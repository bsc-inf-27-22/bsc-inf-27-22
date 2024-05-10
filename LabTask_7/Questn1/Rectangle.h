using namespace std;
class Rectangle
{
private:
    float length;
    float width;
public:
    Rectangle();
    void SetValues(float x, float y);
    float GetArea(float x, float y);
    ~Rectangle();
};

