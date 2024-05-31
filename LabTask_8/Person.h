#include <string>
using namespace std;

class Person{
    public:
        Person();
        Person(float newWeight);
        ~Person();
        float operator + (const Person& otherPerson);
    private:
        float mWeigth;
        string mFirstName;
        int mAge;
};