#include<iostream>
using namespace std;
void swappNumber(int *pvarA, int *pvarB){
    int swap;
    swap = *pvarA;
    *pvarA = *pvarB;
    *pvarA = swap;
}
int main(){
   int* pvarA = nullptr;
   int varA = 25;
   pvarA = &varA;
   int* pvarB = nullptr; 
   int varB = 100;
   pvarB = &varB;
    cout << " VarA before swapp: " << varA << endl;
    cout << " varB before swapp: " << varB << endl;
    swappNumber(varA, varB);
    cout << " varA after swapp: " << varA <<endl;
    cout << " varB after swapp: " << varB <<endl;
    return 0;
}   
