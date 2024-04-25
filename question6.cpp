#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;
    int countVowel(string file){
          int noVowel = 0;
          for (int i = 0; i < file.length(); i++){
                 bool value = (file[i] == 'a' || file[i] == 'e' || file[i] == 'i' || file[i] == 'o' || file[i] == 'u' || file[i] == 'A' || file[i] == 'E' || file[i] == 'I' || file[i] == 'O' || file[i] == 'U');
                    if (value)
                        noVowel++;}
       return noVowel;
        
    }
    int countWord(string data){
        int noWord = 0;
        for (int i = 0; i < data.length(); i++)
        {
            bool value = (data[i] == ' ');
            if (value)
                noWord++;
        }
        return noWord + 1;
        
    }

   void reverse(string reversed){
        for (int i = reversed.length()-1; i >= 0; i-- )
        {
           cout << reversed[i];
       
        }
          
   }


int main(){
    ifstream input("inputFile1.txt");
    input.open("inputFile1.txt");
    string filedata;

    if (input.is_open())
    {
        cout<< " Is open " << endl;

        getline(input, filedata);
        cout<< filedata << endl;}
        else 
            cout <<" Didn't find the file" <<endl;
    input.close();

    return 0;
}

