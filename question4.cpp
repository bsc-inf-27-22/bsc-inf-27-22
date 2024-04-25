#include<iostream>
#include<cctype>
using namespace std;
void check(int z){
    
   
    do
    {
       
      if ((isdigit(z)))
       cout <<  "Sorry, you entered an invalid number. Please try again" <<endl;
       
       cin >> z;
    } while ((isdigit(z)));
    
}
int main(){
    int number;
    cout<<"Enter number between 5 and 10: ";
    cin >> number;
    check(number);
    do
    {
       
        if (number <= 5 || number >= 10)
        {
            cout << " You entered " << number <<" Pleas enter a number between 5 and 10 ";
            cin >> number;
        }
        
        
    } while (number <= 5 || number >= 10);
    cout << "Your input value " << "(" << number << ")" << " has been accepted";
return 0;
    
}   