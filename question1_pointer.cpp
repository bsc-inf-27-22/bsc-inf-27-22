#include <iostream>
#include<string>
using namespace std;
int main(){
    int num = 0;
    string data ;
    cout <<" Enter the value of an integer: " <<endl;
    cin>> num;
    cout <<" Enter the value of the string: "<<endl;
    cin>> data;

    cout << "The value of dynamically allocated integer is :" << num <<endl;
    cout << "The value of dynamically allocated string is :" << data <<endl;
    return 0;
}