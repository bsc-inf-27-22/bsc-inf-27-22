using namespace std;
namespace Shapes{
    class Triangle
    {
    private:
        double base;
        double height;
    public:
        Triangle();
        Triangle(double newBase, double newHeight);
        double GetBase();
        double GetHeight();
        ~Triangle();
    };
    
    
};