#include<iostream>
using namespace std;
void swappNumber(int &varA, int &varB){
    int temp;
    temp = varA;
    varA = varB;
    varB = temp;
    
}
int main(){
    int *varA = 25; 
    int *varB = 100;
    cout << " VarA before swapp: " << varA << endl;
    cout << " varB before swapp: " << varB << endl;
    swappNumber(varA, varB);
    cout << " varA after swapp: " << varA <<endl;
    cout << " varB after swapp: " << varB <<endl;
    return 0;
}