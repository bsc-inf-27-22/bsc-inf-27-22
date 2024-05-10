#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string laston[] ={"B123","C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    for (int i = 0; i < 8; i++)
    {
        if (laston[i].at(0) == 'B')
        {
            cout<< laston[i] <<endl;
        }
        
    }
    return 0;
}