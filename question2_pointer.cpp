#include<iostream>
using namespace std;
int main(){
    int num1 ;
    int num2 ;
    cout <<" Enter the number of rows for your array: "<<endl;
    cin >> num1;
    cout << " Enter the number of column: "<<endl;
    cin >> num2;
    double myarray[num1][num2];
    //myarray = new int[num1][num2];
    
    for (int i = 0; i < num1; i++)
        for(int j = 0; j < num2; j++)
    {
        cout <<" Enter element in row " << i + 1 <<endl;
        cin >> myarray[i][j];
    }
     for (int i = 0; i < num1; i++){
        for(int j = 0; j < num2; j++)
    {
        
       cout << myarray[i][j] << " " ;
    }
    cout << endl;
     }
    return 0;
}