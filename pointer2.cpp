#include <iostream>
using namespace std;

int main(){
    int row, col;
    cout <<"Enter the number of rows(not greate than 3)" <<endl;
    cin >> row;
    cout <<" Enter the number of column ( not greater than 3) "<<endl;
    cin >> col;
    if (row > 3 || col > 3){
        cout << " You are violating the rules: "<<endl;
        return 0;
    }
    double **myarray = new double * [row];
    for (int i = 0; i < row; i++) {
       myarray[i] = new double[col];
    }
    for (int i = 0; i < row; i++) {
       for (int j = 0; j < col; j++)
       myarray[i][j] = i * col + j;
    }
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
     cout<< myarray[i][j] << " "; 
    }
    cout<< endl;
    }
    for (int i = 0; i < row; i++){
        delete[] myarray[i];
    }
    delete[] myarray;

    return 0;
    
    
    
}