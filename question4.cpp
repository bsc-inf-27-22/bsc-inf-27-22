#include <iostream>
#include <cctype>
#include<string>
using namespace std;

int main() {
    char input[100];
    int num;
    bool isValid = false;
    bool allDigits;
    while (!isValid) {
        cout << "Enter an integer value between 5 and 10: ";
        cin.getline(input, 100);
        
        bool allDigits = true;
        for (int i = 0; input[i] != '\0'; ++i) {
            if (!isdigit(input[i])) {
                allDigits = false;
                break;
            }
        }

        
        if (allDigits) {
            num = stoi(input);
            if (num >= 5 && num <= 10) {
                isValid = true;
            } else {
                cout << "Invalid input. Please enter an integer value between 5 and 10." << endl;
            }
        } else {
            cout << "Invalid input. Please enter an integer value between 5 and 10." << endl;
        }
    }

    cout << "Your input value (" << num << ") has been accepted." << endl;

    return 0;
}