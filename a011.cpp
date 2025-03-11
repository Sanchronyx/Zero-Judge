#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string input{};
    while (getline(cin >> ws, input)) { 
        int word = 0;
        bool inWord = false; 

        for (size_t i = 0; i < input.length(); i++) {
            char ch = input[i];
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                if (!inWord) {
                    word++;
                    inWord = true;
                }
            } 
            else inWord = false;
        }
        cout << word << endl;
    }
    return 0;
}