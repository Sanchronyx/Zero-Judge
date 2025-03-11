#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void){
    string input{};
    while (getline(cin, input)){
        stringstream ss (input);
        string output{}, word{};
        while (ss >> word){
            for (int i = 0; i < word.length(); i++){
                if (word[i] == '\'')
            }
        }
    }
}