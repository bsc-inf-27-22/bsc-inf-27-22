#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

   void reverse(string reversed){
        for (int i = reversed.length()-1; i >= 0; i-- )
        {
           cout << reversed[i];
       
        }
          
   }


int main()
{
    int m = 0;
    int n = 0;
    ifstream input("inputFile1.txt");
    input.open("inputFile1.txt");
    string fileData;

    if (input.is_open())
    {
        cout<< " Is open " << endl;

        getline(input, fileData);
        cout<< fileData << endl;}

        for (int i = 0; i < fileData.length(); i++)
        {

            bool value = (fileData[i] == 'a' || fileData[i] == 'e' || fileData[i] == 'i' || fileData[i] == 'o' || fileData[i] == 'u' || fileData[i] == 'A' || fileData[i] == 'E' || fileData[i] == 'I' || fileData[i] == 'O' || fileData[i] == 'U');

            if (value)
                m++;
       
        }
        
        for (int i = 0; i < fileData.length(); i++)
        {

            bool value = (fileData[i] == ' ');

            if (value)
                n++;
       }
        
        }
   cout << "The number of vowels is " << m << endl << "The number of words " << ++n << endl;

   reverse(fileData);
   input.close();

    return 0;
}

