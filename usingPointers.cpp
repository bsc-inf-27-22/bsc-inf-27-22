#include<iostream>
using namespace std;
void swappNum(int* &p, int* &q){
    int* swap;
    swap = p;
    p = q;
    q = swap;
}
int main(){
   int varA = 25;
   int varB = 100;
    cout << " VarA varBefore swapp: " << varA << endl;
    cout << " varB varBefore swapp: " << varB << endl;
    swappNum(varA, varB);
    cout << " varA after swapp: " << varA <<endl;
    cout << " varB after swapp: " << varB <<endl;
    return 0;
}   
