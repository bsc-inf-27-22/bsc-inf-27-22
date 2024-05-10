#include<iostream>
using namespace std;
void swappNumber(int *varA, int *varB){
    int swap;
    swap = varA;
    varA = varB;
    varA = swap;
}
int main(){
   int varA = 25;
   int varB = 100;
    cout << " VarA before swapp: " << varA << endl;
    cout << " varB before swapp: " << varB << endl;
    swappNumber(varA, varB);
    cout << " varA after swapp: " << varA <<endl;
    cout << " varB after swapp: " << varB <<endl;
    return 0;
}   
