#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void){
    string input, word;
    while (getline(cin, input)){
        string output;
        stringstream ss(input);
        while (ss >> word){
            for (int i = word.length() - 1; i >= 0; i--){
                output += word[i];
            }
            output += ' ';
        }
        cout << output << endl;
    }
    return 0;
}